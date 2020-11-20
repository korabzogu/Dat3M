package Thesis;

import com.dat3m.dartagnan.asserts.AbstractAssert;
import com.dat3m.dartagnan.program.Program;
import com.dat3m.dartagnan.program.Register;
import com.dat3m.dartagnan.program.Thread;
import com.dat3m.dartagnan.program.event.Event;
import com.dat3m.dartagnan.program.event.Init;
import com.dat3m.dartagnan.program.memory.Address;
import com.dat3m.dartagnan.program.utils.EType;
import com.dat3m.dartagnan.wmm.filter.FilterBasic;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.lang.reflect.Array;
import java.util.ArrayList;

public class CFileWriter {
    private String filepath;
    private Program prog;
    private ArrayList<Integer> InitThreadIDs;
    private CFileConfig config;


    public CFileWriter(String filepath, Program prog, CFileConfig config) {
        this.filepath = filepath;
        this.prog = prog;
        this.config = config;

    }

    public void createOutputFile(String filepath) {
            File directory = new File(filepath.substring(0, filepath.lastIndexOf("/")));
            if (!directory.exists()){
                directory.mkdirs();
                // If you require it to make the entire directory path including parents,
                // use directory.mkdirs(); here instead.
            }

            File file = new File(filepath);
            try{
                FileWriter fw = new FileWriter(file.getAbsoluteFile());
                BufferedWriter bw = new BufferedWriter(fw);
                bw.write("//File Creation test");
                bw.close();
            }
            catch (IOException e){
                e.printStackTrace();
                System.exit(-1);
            }

    }
    public void writeHeaders(ArrayList<String> headers) {
        try {
            System.out.println("Trying to create file " + filepath);
            FileWriter fw = new FileWriter(filepath);
            System.out.println("Created file " + filepath);
            for(int i = 0; i < headers.size(); i++) {
                fw.write("#include " + "<" +  headers.get(i) + ">\n");
            }
            fw.write("\n");
            fw.write("extern void __VERIFIER_HARDWARE(char * str);\n");
            fw.flush();
            fw.close();
        } catch(java.io.IOException e) {
            System.out.println("Error writing headers");
            e.printStackTrace();
        }
    }

    public void writeMain(Program p) {
        try {
            FileWriter fw = new FileWriter(filepath, true);
            fw.write("int main() {\n");

            // INITIALIZE VARIABLES
            for(Thread thread : prog.getThreads()){
                for(Event e : thread.getCache().getEvents(FilterBasic.get(EType.ANY))) {
                    if(e instanceof Init) {
                        System.out.println("Following event " + e.toString());
                        fw.write("atomic_init(&"
                                + e.AsmToC()
                                + ", "
                                + ((Init) e).getValue().AsmToC() + ");\n");
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
                    String var = config.getThreadName(t.getId());
                    fw.write("pthread_t " + var + ";\n");
                    fw.write("pthread_create(&" + var + ", NULL, &"
                            +  config.getFunctionName(t.getId()) + ", NULL);\n");
                }
            }
            for(Thread t : prog.getThreads()) {
                if(!(t.getEntry() instanceof Init)) {
                    String var = config.getThreadName(t.getId());
                    fw.write("pthread_join(" + var + ", NULL);\n");
                }
            }

            // create assert
            fw.write("assert(" + p.getAss().AsmToC() + ")" + ";\n");

            // END MAIN
            fw.write("}\n");
            fw.write("\n");
            fw.flush();
            fw.close();
        } catch(java.io.IOException e) {
            System.out.println("Error writing main function");
            e.printStackTrace();
        }
    }

    // Write the uninitialized global variables for the thread-specific structs
    public void writeGlobalStruct(Thread t) {
        try {
            FileWriter fw = new FileWriter(filepath, true);
            fw.write("struct " + config.getStructName(t.getId()) + " " + config.getStructVarName(t.getId()) + ";\n");
            fw.flush();
            fw.close();
        }
        catch (java.io.IOException e) {
            System.out.println("Error writing structs for thread " + t.getId());
            e.printStackTrace();
        }
    }
    public void writeFunctionStruct(Thread t) {
        try {
            FileWriter fw = new FileWriter(filepath, true);
            if(!(t.getEntry() instanceof Init) && t.getRegisterNames().size() > 0) {
                fw.write("struct " + config.getStructName(t.getId()) + " {\n");
                ArrayList<String> regNames = t.getRegisterNames();
                for(String reg : regNames) {
                    fw.write("int " + reg + ";\n");
                }
                fw.write("};\n");
                fw.flush();
                fw.close();
            }
        }
        catch (java.io.IOException e) {
            System.out.println("Error writing structs for thread " + t.getId());
            e.printStackTrace();
        }
    }

    public void writeFunction(Thread t) {
        try {
            FileWriter fw = new FileWriter(filepath, true);
            if(!(t.getEntry() instanceof Init)) {
                fw.write("void *" + config.getFunctionName(t.getId()) + "() {\n");
            }
            ArrayList<String> localRegs = t.getRegisterNames();
            for(String reg : localRegs) {
                fw.write("int " + reg + ";\n");
            }
            for(Event e : t.getCache().getEvents(FilterBasic.get(EType.ANY))) {
                if(!(e instanceof Init) && e != null) {
                    fw.write(e.AsmToC() + "\n");
                }
            }
            // Barrier
            if(!(t.getEntry() instanceof Init)) {
                fw.write("atomic_thread_fence(memory_order_seq_cst);\n");
            }

            // Propagate local variables
            for(String reg : localRegs) {
                fw.write( config.getStructVarName(t.getId()) + "." + reg + " = " + reg + ";\n");
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

    public void writeGlobalVariables(Init e, Program p) {
        try {
            FileWriter fw = new FileWriter(filepath, true);

            fw.flush();
            fw.write("atomic_int " + p.getMemory().getLocationForAddress((Address) e.getAddress()) + ";\n");
            fw.flush();
            fw.close();
            }
            catch(java.io.IOException ex) {
                System.out.println("Error writing function declaration of function ");
                ex.printStackTrace();
            }
    }
}
