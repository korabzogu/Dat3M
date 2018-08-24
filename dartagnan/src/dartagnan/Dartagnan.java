package dartagnan;

import java.io.File;
import java.io.IOException;

import com.microsoft.z3.*;
import com.microsoft.z3.enumerations.Z3_ast_print_mode;

import dartagnan.wmm.WmmInterface;
import dartagnan.wmm.WmmResolver;
import dartagnan.wmm.Wmm;
import org.antlr.v4.runtime.ANTLRInputStream;
import org.antlr.v4.runtime.CommonTokenStream;
import org.antlr.v4.runtime.DiagnosticErrorListener;
import org.apache.commons.io.FileUtils;

import dartagnan.asserts.AbstractAssert;
import dartagnan.program.Program;
import dartagnan.utils.Utils;
import dartagnan.wmm.Domain;
import dartagnan.wmm.relation.Relation;
import dartagnan.parsers.ParserInterface;
import dartagnan.parsers.ParserResolver;

import org.apache.commons.cli.*;

// This is the version submitted to FMCAD 2018 on August 2018
@SuppressWarnings("deprecation")
public class Dartagnan {

	public static void main(String[] args) throws Z3Exception, IOException {
        WmmResolver wmmResolver = new WmmResolver();
		
		Options options = new Options();

        Option targetOpt = new Option("t", "target", true, "Target architecture to compile the program");
        targetOpt.setRequired(true);
        options.addOption(targetOpt);

		Option inputOpt = new Option("i", "input", true, "Path to the file containing the input program");
        inputOpt.setRequired(true);
        options.addOption(inputOpt);

        options.addOption(Option.builder("unroll")
        		.hasArg()
        		.desc("Unrolling steps")
        		.build());

        options.addOption(Option.builder("idl")
        		.desc("Uses IDL encoding for transitive closure")
        		.build());

        options.addOption(Option.builder("cat")
        		.hasArg()
        		.desc("Path to the CAT file")
        		.build());

        options.addOption(Option.builder("relax")
        		.desc("Uses relax encoding for recursive relations")
        		.build());

        options.addOption(Option.builder("draw")
        		.hasArg()
        		.desc("Path to save the execution graph if the state is reachable")
        		.build());
        
        options.addOption(Option.builder("rels")
        		.hasArgs()
        		.desc("Relations to be drawn in the graph")
        		.build());

        CommandLineParser parserCmd = new DefaultParser();
        HelpFormatter formatter = new HelpFormatter();
        CommandLine cmd;

        try {
        	cmd = parserCmd.parse(options, args);
        }
        catch (ParseException e) {
        	System.out.println(e.getMessage());
        	formatter.printHelp("DARTAGNAN", options);
        	System.exit(1);
        	return;
        }

		String target = cmd.getOptionValue("target").trim();
        if(!(wmmResolver.getArchSet().contains(target))){
            System.out.println("Unrecognized target");
            System.exit(0);
            return;
        }

		String inputFilePath = cmd.getOptionValue("input");
		if(!inputFilePath.endsWith("pts") && !inputFilePath.endsWith("litmus")) {
			System.out.println("Unrecognized program format");
			System.exit(0);
			return;
		}

		Program p = parseProgram(inputFilePath);
		if(p.getAss() == null){
			throw new RuntimeException("Assert is required for Dartagnan tests");
		}

        WmmInterface mcm;
		if (cmd.hasOption("cat")) {
			mcm = parseCat(cmd.getOptionValue("cat"));
            Relation.Approx = true;
		} else {
            mcm = wmmResolver.getWmmForArch(target);
            Relation.Approx = cmd.hasOption("relax");
        }

		int steps = 1;
		if(cmd.hasOption("unroll")) {
			steps = Integer.parseInt(cmd.getOptionValue("unroll"));
		}

		p.initialize(steps);
		p.compile(target, false, true);

		Context ctx = new Context();
		Solver s = ctx.mkSolver();

		s.add(p.encodeDF(ctx));
		s.add(p.getAss().encode(ctx));
		s.add(p.encodeCF(ctx));
		s.add(p.encodeDF_RF(ctx));
		s.add(Domain.encode(p, ctx));
        s.add(mcm.encode(p, ctx, cmd.hasOption("relax"), cmd.hasOption("idl")));
        s.add(mcm.Consistent(p, ctx));

		boolean result = (s.check() == Status.SATISFIABLE);
		if(p.getAss().getInvert()){
			result = !result;
		}

		System.out.println("Condition " + p.getAss().toStringWithType());
		System.out.println(result ? "Ok" : "No");

		if(cmd.hasOption("draw") && canDrawGraph(p.getAss(), result)) {
			String[] rels = new String[100];
			if(cmd.hasOption("rels")) {
				rels = cmd.getOptionValues("rels");
			}

			ctx.setPrintMode(Z3_ast_print_mode.Z3_PRINT_SMTLIB_FULL);
			String outputPath = cmd.getOptionValue("draw");
			Utils.drawGraph(p, ctx, s.getModel(), outputPath, rels);
			System.out.println("Execution graph is written to " + outputPath);
		}
	}

	public static Program parseProgram(String inputFilePath) throws IOException{
		File file = new File(inputFilePath);
		String programRaw = FileUtils.readFileToString(file, "UTF-8");
		ANTLRInputStream input = new ANTLRInputStream(programRaw);
		Program program = new Program(inputFilePath);

		if(inputFilePath.endsWith("litmus")) {
			ParserResolver parserResolver = new ParserResolver();
			ParserInterface parser = parserResolver.getParser(inputFilePath);
			program = parser.parse(inputFilePath);
		}

		if(inputFilePath.endsWith("pts")) {
			PorthosLexer lexer = new PorthosLexer(input);
			CommonTokenStream tokens = new CommonTokenStream(lexer);
			PorthosParser parser = new PorthosParser(tokens);
			parser.addErrorListener(new DiagnosticErrorListener(true));
			program = parser.program(inputFilePath).p;
		}

		return program;
	}

	public static Wmm parseCat(String catPath) throws IOException{
		File modelfile = new File(catPath);
		String mcmtext = FileUtils.readFileToString(modelfile, "UTF-8");
		ANTLRInputStream mcminput = new ANTLRInputStream(mcmtext);
		ModelLexer lexer = new ModelLexer(mcminput);
		CommonTokenStream tokens = new CommonTokenStream(lexer);
		ModelParser parser = new ModelParser(tokens);
		return parser.mcm().value;
	}

	private static boolean canDrawGraph(AbstractAssert ass, boolean result){
		String type = ass.getType();
		if(type == null){
			return result;
		}

		if(result){
			return type.equals(AbstractAssert.ASSERT_TYPE_EXISTS) || type.equals(AbstractAssert.ASSERT_TYPE_FINAL);
		}
		return type.equals(AbstractAssert.ASSERT_TYPE_NOT_EXISTS) || type.equals(AbstractAssert.ASSERT_TYPE_FORALL);
	}
}
