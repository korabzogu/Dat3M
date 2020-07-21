package com.dat3m.dartagnan.expression.op;

import com.microsoft.z3.ArithExpr;
import com.microsoft.z3.BoolExpr;
import com.microsoft.z3.Context;
import com.microsoft.z3.IntExpr;

public enum COpBin {
    EQ, NEQ, GTE, UGTE, LTE, ULTE, GT, LT, UGT, ULT;

    @Override
    public String toString() {
        switch(this){
            case EQ:
                return "==";
            case NEQ:
                return "!=";
            case GTE:
            case UGTE:
                return ">=";
            case LTE:
            case ULTE:
                return "<=";
            case GT:
            case UGT:
                return ">";
            case LT:
            case ULT:
                return "<";
        }
        return super.toString();
    }

    public BoolExpr encode(ArithExpr e1, ArithExpr e2, Context ctx) {
        switch(this) {
            case EQ:
                return ctx.mkEq(e1, e2);
            case NEQ:
                return ctx.mkNot(ctx.mkEq(e1, e2));
            case LT:
                return ctx.mkLt(e1, e2);
            case ULT:
                return ctx.mkBVULT(ctx.mkInt2BV(32, (IntExpr) e1), ctx.mkInt2BV(32, (IntExpr) e1));
            case LTE:
                return ctx.mkLe(e1, e2);
            case ULTE:
                return ctx.mkBVULE(ctx.mkInt2BV(32, (IntExpr) e1), ctx.mkInt2BV(32, (IntExpr) e1));
            case GT:
                return ctx.mkGt(e1, e2);
            case UGT:
                return ctx.mkBVUGT(ctx.mkInt2BV(32, (IntExpr) e1), ctx.mkInt2BV(32, (IntExpr) e1));
            case GTE:
                return ctx.mkGe(e1, e2);
            case UGTE:
                return ctx.mkBVUGE(ctx.mkInt2BV(32, (IntExpr) e1), ctx.mkInt2BV(32, (IntExpr) e1));
        }
        throw new UnsupportedOperationException("Encoding of not supported for COpBin " + this);
    }

    public boolean combine(int a, int b){
        switch(this){
            case EQ:
                return a == b;
            case NEQ:
                return a != b;
            case LT:
            case ULT:
                return a < b;
            case LTE:
            case ULTE:
                return a <= b;
            case GT:
            case UGT:
                return a > b;
            case GTE:
            case UGTE:
                return a >= b;
        }
        throw new UnsupportedOperationException("Illegal operator " + this + " in COpBin");
    }
}
