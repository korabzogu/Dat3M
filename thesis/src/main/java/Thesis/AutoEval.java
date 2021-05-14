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
import java.nio.file.Files;
import java.nio.file.Paths;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.List;

import static com.dat3m.dartagnan.analysis.Base.runAnalysis;
import static com.dat3m.dartagnan.analysis.Base.runAnalysisIncrementalSolver;
import static com.dat3m.dartagnan.analysis.DataRaces.checkForRaces;

public class AutoEval {

    public static void main(String[] args) {
        Collection<String[]> data = data();
        for (String[] params : data) {
            try {
                test(params);
            } catch (Exception e) {
                System.out.println(e.toString());
            }
        }
    }

    public static void test(String[] args) throws IOException {
        Wmm mcm;
        DartagnanOptions options;
        Program p;
        Context ctx;
        Solver s;
        Settings settings;
        options = new DartagnanOptions();
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

        mcm = new ParserCat().parse(new File(options.getTargetModelFilePath()));
        p = new ProgramParser().parse(new File(options.getProgramFilePath()));

        Arch target = p.getArch();
        if(target == null){
            target = options.getTarget();
        }
        if(target == null) {
            System.out.println("Compilation target cannot be inferred");
            throw new RuntimeException("Compilation target cannot be inferred");
            //System.exit(0);
        }

        settings = options.getSettings();
        ctx = new Context();
        s = ctx.mkSolver();

        Result result = selectAndRunAnalysis(options, mcm, p, target, settings, ctx, s);
        System.out.println(result);

        boolean evalResult = false;
        switch (result) {
            case PASS: evalResult = true; break;
            case FAIL: evalResult = false; break;
            case UNKNOWN: throw new RuntimeException("Unknown Result");
        }

        System.out.println(result.toString());
    }
    public static Collection<String[]> data() {
        List<String[]> result = new ArrayList<>();


        //result.add(new String[]{"-i", "../litmus/X86/RR+WR+rmw-mfence+mfence.litmus", "-cat","../cat/svcomp.cat"});

        List<String> blacklist = new ArrayList<>();
        blacklist.add("/litmus/C/lockfree/Michael-Scott.litmus");
        System.out.println(System.getProperty("user.dir"));
        try {
            Files.walk(Paths.get("litmus/"))
                    .filter(Files::isRegularFile)
                    .filter(a -> a.toString().endsWith(".litmus") && !(blacklist.contains(a.toString())))
                    .forEach(f -> result.add(new String[]{"-i",f.toString(),"-cat","cat/svcomp.cat"}));
        } catch (IOException e) {
            e.printStackTrace();
        }
        Collections.shuffle(result);
        return result;
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
