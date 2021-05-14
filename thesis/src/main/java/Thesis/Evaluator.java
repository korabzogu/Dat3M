package Thesis;

import com.dat3m.dartagnan.analysis.Termination;
import com.dat3m.dartagnan.parsers.cat.ParserCat;
import com.dat3m.dartagnan.parsers.program.ProgramParser;
import com.dat3m.dartagnan.program.Program;
import com.dat3m.dartagnan.utils.Result;
import com.dat3m.dartagnan.utils.Settings;
import com.dat3m.dartagnan.utils.options.DartagnanOptions;
import com.dat3m.dartagnan.wmm.Wmm;
import com.dat3m.dartagnan.wmm.utils.Arch;
import com.microsoft.z3.Context;
import com.microsoft.z3.Solver;
import org.apache.commons.cli.HelpFormatter;
import java.io.File;
import java.io.IOException;

import static com.dat3m.dartagnan.analysis.Base.runAnalysis;
import static com.dat3m.dartagnan.analysis.Base.runAnalysisIncrementalSolver;
import static com.dat3m.dartagnan.analysis.DataRaces.checkForRaces;

public class Evaluator {
    public static boolean evaluate(String[] args) throws IOException {

        DartagnanOptions options = new DartagnanOptions();
        try {
            options.parse(args);
        }
        catch (Exception e){
            if(e instanceof UnsupportedOperationException){
                System.out.println(e.getMessage());
            }
            new HelpFormatter().printHelp("DARTAGNAN", options);
            throw new RuntimeException("Error in parsing arguments");
            //System.exit(1);
        }

        Wmm mcm = new ParserCat().parse(new File(options.getTargetModelFilePath()));
        Program p = new ProgramParser().parse(new File(options.getProgramFilePath()));

        Arch target = p.getArch();
        if(target == null){
            target = options.getTarget();
        }
        if(target == null) {
            System.out.println("Compilation target cannot be inferred");
            throw new RuntimeException("Compilation target cannot be inferred");
            //System.exit(0);
        }

        Settings settings = options.getSettings();
        Context ctx = new Context();
        Solver s = ctx.mkSolver();

        Result result = selectAndRunAnalysis(options, mcm, p, target, settings, ctx, s);
        System.out.println(result);

        boolean evalResult = false;
        switch (result) {
            case PASS: evalResult = true; break;
            case FAIL: evalResult = false; break;
            case UNKNOWN: throw new RuntimeException("Unknown Result");
        }
        return evalResult;
    }

    public static void runDartagnan(String[] args) {

    }
    private static Result selectAndRunAnalysis(DartagnanOptions options, Wmm mcm, Program p, Arch target, Settings settings, Context ctx, Solver s) {
        switch(options.getAnalysis()) {
            case RACES:
                return checkForRaces(s, ctx, p, mcm, target, settings);
            case TERMINATION:
                return Termination.runAnalysis(s, ctx, p, mcm, target, settings);
            case REACHABILITY:
                return options.useISolver() ?
                        runAnalysisIncrementalSolver(s, ctx, p, mcm, target, settings) :
                        runAnalysis(s, ctx, p, mcm, target, settings);
            default:
                throw new RuntimeException("Unrecognized analysis");
        }
    }
}
