package Thesis;

import Thesis.CFileWriter;
import com.dat3m.dartagnan.parsers.program.ProgramParser;
import com.dat3m.dartagnan.program.Program;
import com.dat3m.dartagnan.program.Thread;
import com.dat3m.dartagnan.program.event.Event;
import com.dat3m.dartagnan.program.event.Init;
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

        // DEPRECATED cfw.writeRegisterVariables(registers);

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
        // Write variables for functions etc.
        for(Location l : p.getLocations()) {
            // TODO write lines with atomic_int l.AsmToC();
            try {
                FileWriter fw = new FileWriter(filepath, true);
                fw.write("atomic_int " + l.AsmToC() + ";\n");
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


    }
    /*
    public static void writeHeaders(ArrayList<String> headers) {
        try {
            FileWriter fw = new FileWriter("thesis/out/tmp.c");
            for(int i = 0; i < headers.size(); i++) {
                fw.write("#include " + "<" +  headers.get(i) + ">\n");
            }
            fw.write("\n");
            fw.flush();
            fw.close();
        } catch(IOException e) {
            System.out.println("Error writing headers");
            e.printStackTrace();
        }
    }
    public static void writeMain() {
        try {
            FileWriter fw = new FileWriter("thesis/out/tmp.c", true);
            fw.write("void *m_thread_exec() {\n");
            fw.write("printf(\"Main thread hello\\n \");\n");
            fw.write("}\n\n");
            fw.write("int main() {\n");
            fw.write("pthread_t m_thread;\n");
            fw.write("pthread_create(&m_thread, NULL, &m_thread_exec, NULL);\n");
            fw.write("pthread_join(m_thread, NULL);\n");
            fw.write("}\n");
            fw.write("\n");
            fw.flush();
            fw.close();
        } catch(IOException e) {
            System.out.println("Error writing headers");
            e.printStackTrace();
        }
    }
    public static ArrayList<String> getRegisterNames(Event entry) {
        ArrayList<String> res = new ArrayList<String>();
        Event cur = entry;
        while(cur != null) {
            try {
                Class c = Class.forName("com.dat3m.dartagnan.program.event.Event");
                Method meth = c.getMethod("getRegister");
                Object retobj = meth.invoke(meth);
                cur = cur.getSuccessor();
            } catch (Throwable e) {
                System.err.println(e);
            }
        }
    }
    */
}