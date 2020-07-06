package Thesis;

import com.dat3m.dartagnan.program.Program;
import com.dat3m.dartagnan.program.Thread;
import com.dat3m.dartagnan.program.event.Event;
import com.dat3m.dartagnan.program.event.Init;
import com.dat3m.dartagnan.program.utils.EType;
import com.dat3m.dartagnan.wmm.filter.FilterBasic;

import java.io.FileWriter;
import java.util.ArrayList;

public class CFileWriter {
    private String filepath;
    private Program prog;
    private ArrayList<Integer> InitThreadIDs;


    public CFileWriter(String filepath, Program prog) {
        this.filepath = filepath;
        this.prog = prog;
    }

    public void writeHeaders(ArrayList<String> headers) {
        try {
            FileWriter fw = new FileWriter(filepath);
            for(int i = 0; i < headers.size(); i++) {
                fw.write("#include " + "<" +  headers.get(i) + ">\n");
            }
            fw.write("\n");
            fw.flush();
            fw.close();
        } catch(java.io.IOException e) {
            System.out.println("Error writing headers");
            e.printStackTrace();
        }
    }

    public void writeMain() {
        try {
            FileWriter fw = new FileWriter(filepath, true);
            fw.write("void *m_thread_exec() {\n");
            fw.write("printf(\"Main thread hello\\n \");\n");
            fw.write("}\n\n");
            fw.write("int main() {\n");
            fw.write("pthread_t m_thread;\n");

            String initInstr = "", normalInstr = "";
            // Variables for the function threads here
            for(Thread thread : prog.getThreads()){
                for(Event e : thread.getCache().getEvents(FilterBasic.get(EType.ANY))) {
                    if(e instanceof Init) {
                        // Deal with init-threads (start and join them before the others
                        initInstr += "//" + e.toString() + '\n';
                    } else {
                        normalInstr += "";
                    }
                }
            }
            fw.write("pthread_create(&m_thread, NULL, &m_thread_exec, NULL);\n");

            // thread creates for the function threads here

            // thread joins for the function threads here
            fw.write("pthread_join(m_thread, NULL);\n");
            fw.write("}\n");
            fw.write("\n");
            fw.flush();
            fw.close();
        } catch(java.io.IOException e) {
            System.out.println("Error writing headers");
            e.printStackTrace();
        }
    }

    public void writeFunctionDecl(Thread t) {
        try {
            FileWriter fw = new FileWriter(filepath, true);
            fw.write("void *thread_" + t.getId() + "() {\n");
            // comment of litmus instructions
            fw.write("/*\n");

            for(Event e : t.getCache().getEvents(FilterBasic.get(EType.ANY))) {
                if(e instanceof Init) {
                    // Deal with init-threads (start and join them before the others
                    fw.write("This is an init thread and should run before the others\n");
                }
                fw.write(e.toString() + "\n");
            }


            fw.write("*/\n");


            fw.write("}\n\n");
            fw.flush();
            fw.close();
        } catch(java.io.IOException e) {
            System.out.println("Error writing function declaration of function " + t.getId());
            e.printStackTrace();
        }
    }
}
