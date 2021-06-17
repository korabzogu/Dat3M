package com.dat3m.dartagnan.program.event;

import com.dat3m.dartagnan.program.Thread;
import com.dat3m.dartagnan.program.utils.EType;
import com.dat3m.dartagnan.utils.recursion.RecursiveAction;
import com.dat3m.dartagnan.utils.recursion.RecursiveFunction;
import com.dat3m.dartagnan.wmm.utils.Arch;
import com.google.common.collect.ImmutableSet;
import com.dat3m.dartagnan.expression.ExprInterface;
import com.dat3m.dartagnan.program.Register;
import com.dat3m.dartagnan.program.event.utils.RegReaderData;
import com.microsoft.z3.BoolExpr;
import com.microsoft.z3.Context;

import java.util.*;

public class If extends Event implements RegReaderData {

    private final ExprInterface expr;
    private Event successorMain;
    private Event successorElse;
    private final Event exitMainBranch;
    private final Event exitElseBranch;

    private final ImmutableSet<Register> dataRegs;

    public If(ExprInterface expr, Skip exitMainBranch, Skip exitElseBranch) {
        if (expr == null) {
            throw new IllegalArgumentException("Expression in \"if\" event must be not null");
        }
        if (exitMainBranch == null || exitElseBranch == null) {
            throw new IllegalArgumentException("Branch exit in \"if\" event must be not null");
        }
        if (exitMainBranch.equals(exitElseBranch)) {
            throw new IllegalArgumentException("Last events in \"if\" branches must be distinct");
        }
        this.expr = expr;
        this.exitMainBranch = exitMainBranch;
        this.exitElseBranch = exitElseBranch;
        this.thread = exitElseBranch.getThread();
        this.dataRegs = expr.getRegs();
        addFilters(EType.ANY, EType.CMP, EType.REG_READER);
    }

    public ExprInterface getGuard(){
        return expr;
    }

    public Event getExitMainBranch() {
        return exitMainBranch;
    }

    public Event getExitElseBranch() {
        return exitElseBranch;
    }

    public Event getSuccessorMainBranch() {
    	return successorMain;
    }

    public Event getSuccessorElseBranch() {
    	return successorElse;
    }

    public List<Event> getMainBranchEvents() {
        if (cId > -1) {
            return successorMain.getSuccessors();
        }
        throw new RuntimeException("Not implemented");
    }

    public List<Event> getElseBranchEvents() {
        if (cId > -1) {
            return successorElse.getSuccessors();
        }
        throw new RuntimeException("Not implemented");
    }

    @Override
    public void setThread(Thread thread) {
        super.setThread(thread);
        if (successorMain != null)
            successorMain.setThread(thread);
        if (successorElse != null)
            successorElse.setThread(thread);
        if (successor != null)
            successor.setThread(thread);
    }

    @Override
    public ImmutableSet<Register> getDataRegs() {
        return dataRegs;
    }

    @Override
    public RecursiveAction getSuccessorsRecursive(List<Event> list, int depth){
        if (cId > -1) {
            list.add(this);
            //Note: For ease of implementation, we clear the call stack no matter the depth
            return RecursiveAction
                    .call(() -> successorMain.getSuccessorsRecursive(list, 0))
                    .then(() -> successorElse.getSuccessorsRecursive(list, 0))
                    .then(() -> successor != null
                            ? successor.getSuccessorsRecursive(list, 0)
                            : RecursiveAction.done());
        }
        return super.getSuccessorsRecursive(list, depth);
    }

    @Override
    public String toString() {
        return "if(" + expr + ")";
    }


    // Unrolling
    // -----------------------------------------------------------------------------------------------------------------

    @Override
    public If getCopy() {
        Skip copyExitMainBranch = (Skip) exitMainBranch.getCopy();
        Skip copyExitElseBranch = (Skip) exitElseBranch.getCopy();
        If copy = new If(expr, copyExitMainBranch, copyExitElseBranch);
        copy.setOId(oId);

        Event ptr = copyPath(successor, exitMainBranch, copy);
        ptr.successor = copyExitMainBranch;
        ptr = copyPath(exitMainBranch.successor, exitElseBranch, copyExitMainBranch);
        ptr.successor = copyExitElseBranch;

        return copy;
    }


    // Compilation
    // -----------------------------------------------------------------------------------------------------------------

    @Override
    protected RecursiveFunction<Integer> compileRecursive(Arch target, int nextId, Event predecessor, int depth) {
        cId = nextId++;
        if (successor == null) {
            throw new RuntimeException("Malformed If event");
        }
        int finalNextId = nextId;
        return RecursiveFunction
                .call(() -> successor.compileRecursive(target, finalNextId, predecessor, 0))
                .then( retVal ->  {
                    successorMain = successor;
                    successorElse = exitMainBranch.successor;
                    successor = exitElseBranch.successor;
                    exitMainBranch.successor = null;
                    exitElseBranch.successor = null;
                    return RecursiveFunction.done(retVal);
                });
    }


    // Encoding
    // -----------------------------------------------------------------------------------------------------------------

    @Override
    public BoolExpr encodeCF(Context ctx, BoolExpr cond) {
        if (cfEnc == null) {
            cfCond = (cfCond == null) ? cond : ctx.mkOr(cfCond, cond);
            cfEnc = ctx.mkAnd(ctx.mkEq(cfVar, cfCond), encodeExec(ctx));
        }
        return cfEnc;
    }

    @Override
    public String AsmToC() {
        // if lines String
        String ifString = "";
        String elseString = "";
        Event ifEvent = this.successor;
        Event elseEvent = this.exitMainBranch.successor;
        while(ifEvent != exitMainBranch) {
            ifString += ifEvent.AsmToC() + '\n';
            ifEvent = ifEvent.getSuccessor();
        }
        while(elseEvent != exitElseBranch) {
            elseString += elseEvent.AsmToC() + '\n';
            elseEvent = elseEvent.getSuccessor();
        }
        System.out.print("if(" + expr.AsmToC() + ") {\n" +
                // if lines
                ifString +
                "} else {" +
                // else lines
                elseString +
                "}\n");
        return "if(" + expr.AsmToC() + ") {\n" +
                // if lines
                ifString +
                "} else {" +
                // else lines
                elseString +
                "}\n";
    }
}