package Thesis;

import Thesis.CFileWriter;
import com.dat3m.dartagnan.parsers.program.ProgramParser;
import com.dat3m.dartagnan.parsers.program.utils.PointerLocation;
import com.dat3m.dartagnan.program.Program;
import com.dat3m.dartagnan.program.Register;
import com.dat3m.dartagnan.program.Thread;
import com.dat3m.dartagnan.program.event.Event;
import com.dat3m.dartagnan.program.event.Init;
import com.dat3m.dartagnan.program.event.Load;
import com.dat3m.dartagnan.program.memory.Address;
import com.dat3m.dartagnan.program.memory.Location;
import com.dat3m.dartagnan.program.utils.EType;
import com.dat3m.dartagnan.utils.options.DartagnanOptions;
import com.dat3m.dartagnan.utils.printer.Printer;
import com.dat3m.dartagnan.wmm.filter.FilterBasic;
import org.apache.commons.cli.HelpFormatter;

import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.lang.reflect.*;
import java.util.Arrays;

public class Tool {
    public static void main(String[] args) throws IOException {
        System.out.println(Arrays.toString(args));
        DartagnanOptions options = new DartagnanOptions();
        try {
            options.parse(args);
        }
        catch (Exception e){
            if(e instanceof UnsupportedOperationException){
                System.out.println(e.getMessage());
            }
            new HelpFormatter().printHelp("DARTAGNAN", options);
            System.exit(1);
            return;
        }

        Program p = new ProgramParser().parse(new File(options.getProgramFilePath()));

        System.out.println(new Printer().print(p));

        Printer printer = new Printer();
        System.out.println(printer.print(p));

        ArrayList<String> headers = new ArrayList<String>();
        headers.add("pthread.h");
        headers.add("assert.h");
        headers.add("stdio.h");
        headers.add("stdatomic.h");
        String filepath = "out/" + options
                .getProgramFilePath()
                .substring(3, options.getProgramFilePath().length() - 6) + "c";

        CFileConfig cfg = new CFileConfig(
                "thread_vars_<id>",
                "thread_local_<id>",
                "func_<id>",
                "thread_<id>");
        CFileWriter cfw = new CFileWriter(filepath, p, cfg);

        cfw.createOutputFile(filepath);
        cfw.writeHeaders(headers);

        ArrayList<ArrayList<String>> registers = new ArrayList<ArrayList<String>>();
        // Write registers
        for(Thread thread : p.getThreads()) {
            registers.add(thread.getRegisterNames());
        }

        for(Thread thread : p.getThreads()) {
            if(!(thread.getEntry() instanceof Init) && thread.getRegisterNames().size() > 0) {
                cfw.writeGlobalVars(thread);
            }
        }
        // DEPRECATED cfw.writeRegisterVariables(registers);

        /*
        // Write struct declarations for local variables
        for(Thread thread : p.getThreads()) {
            if(!(thread.getEntry() instanceof Init) && thread.getRegisterNames().size() > 0) {
                cfw.writeFunctionStruct(thread);
            }
        }

        // Write global struct variables
        for(Thread thread : p.getThreads()) {
            if(!(thread.getEntry() instanceof Init) && thread.getRegisterNames().size() > 0) {
                cfw.writeGlobalStruct(thread);
            }
        }
        */

        // Write variables for functions etc.
        for(Address a : p.getMemory().getAllAddresses()) {
            // TODO write lines with atomic_int l.AsmToC();
            try {
                FileWriter fw = new FileWriter(filepath, true);
                //
                String memName = a.AsmToC();
                fw.write("atomic_int " + memName + ";\n");
                fw.flush();
                fw.close();
            }
            catch(java.io.IOException ex) {
                System.out.println("Error writing function declaration of function ");
                ex.printStackTrace();
            }
        }
        for(Thread thread : p.getThreads()){
            cfw.writeFunction(thread);
        }
        cfw.writeMain(p);



        for(Event e : p.getCache().getEvents(FilterBasic.get(EType.READ))) {
            // load events
            if(e instanceof Load) {
                Load l = (Load) e;
                if(l.getAddress() instanceof Register) {
                    boolean set = false;
                    for (PointerLocation ptrLoc : p.getPtrLocMap()) {
                        Register r = (Register) l.getAddress();

                        if (ptrLoc.getThreadID() == r.getThreadId() && l.getAddress().toString().equals(ptrLoc.getPtr())) {
                            set = true;
                            break;
                        }
                    }
                    if (!set) {
                        throw new RuntimeException("PointerLoc exception: " + l.getAddress().toString());
                    }
                }
            }
            // TODO make Map from list to map
            // if l is not in map throw exception

        }
        // customTag regex
        cfw.processCustomTags();
        cfw.processAssertionTags();

        System.out.println("\n\nRegister Address 1-to-1:\n");
        for(PointerLocation s : p.getPtrLocMap()) {
            System.out.println(s.getThreadID() + " " + s.getLoc() + " " + s.getPtr());
        }
    }
}