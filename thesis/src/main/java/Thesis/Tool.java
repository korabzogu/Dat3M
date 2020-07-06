package com.dat3m.thesis;

import Thesis.CFileWriter;
import com.dat3m.dartagnan.parsers.program.ProgramParser;
import com.dat3m.dartagnan.program.Program;
import com.dat3m.dartagnan.program.Thread;
import com.dat3m.dartagnan.utils.options.DartagnanOptions;
import com.dat3m.dartagnan.utils.printer.Printer;
import org.apache.commons.cli.HelpFormatter;

import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;

public class Tool {
    public static void main(String[] args) throws IOException {

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
        headers.add("stdio.h");
        String filepath = "thesis/out/tmp.c";

        CFileWriter cfw = new CFileWriter(filepath, p);
        cfw.writeHeaders(headers);
        for(Thread thread : p.getThreads()){
            cfw.writeFunctionDecl(thread);
        }
        cfw.writeMain();


    }
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
}