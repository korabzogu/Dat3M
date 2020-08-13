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
            fw.write("int main() {\n");


            // INITIALIZE VARIABLES
            for(Thread thread : prog.getThreads()){
                for(Event e : thread.getCache().getEvents(FilterBasic.get(EType.ANY))) {
                    if(e instanceof Init) {
                        System.out.println("Following event " + e.toString());
                        fw.write(e.AsmToC() + '\n');
                    }
                }
            }

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

            for(Thread t : prog.getThreads()) {
                if(!(t.getEntry() instanceof Init)) {
                    fw.write("pthread_t m_thread_" + t.getId() + ";\n");
                    fw.write("pthread_create(&m_thread_" + t.getId() + ", NULL, &thread_" + t.getId() + ", NULL);\n");
                }
            }
            for(Thread t : prog.getThreads()) {
                if(!(t.getEntry() instanceof Init)) {
                    fw.write("pthread_join(m_thread_" + t.getId() + ", NULL);\n");
                }
            }

            // END MAIN
            fw.write("printf(\"%d %d\\n\", mem0, mem1);\n");
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
            if(!(t.getEntry() instanceof Init)) {
                fw.write("void *thread_" + t.getId() + "() {\n");
            }

            for(Event e : t.getCache().getEvents(FilterBasic.get(EType.ANY))) {
                if(!(e instanceof Init)) {
                    fw.write(e.AsmToC() + "\n");
                }
            }

            if(!(t.getEntry() instanceof Init)) {
                fw.write("}\n\n");
            }
            fw.flush();
            fw.close();
        } catch(java.io.IOException e) {
            System.out.println("Error writing function declaration of function " + t.getId());
            e.printStackTrace();
        }
    }

    public void writeGlobalVariables(Event e) {
        try {
            FileWriter fw = new FileWriter(filepath, true);

            fw.flush();
            String str;
            int start = e.toString().indexOf('&');
            int end = e.toString().indexOf(' ');
            if(end != -1) {
                str = e.toString().substring(start + 1, end);
            } else {
                throw new RuntimeException("Failed to parse global variable name");
            }
            fw.write("atomic_int " + str + ";\n");
            fw.flush();
            fw.close();
            }
            catch(java.io.IOException ex) {
                System.out.println("Error writing function declaration of function ");
                ex.printStackTrace();
            }
    }

    public void initializeGlobalVariables(Event entry) {

    }
}
