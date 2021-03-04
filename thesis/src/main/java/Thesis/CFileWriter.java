package Thesis;

import com.dat3m.dartagnan.asserts.AbstractAssert;
import com.dat3m.dartagnan.parsers.program.utils.PointerLocation;
import com.dat3m.dartagnan.program.Program;
import com.dat3m.dartagnan.program.Register;
import com.dat3m.dartagnan.program.Thread;
import com.dat3m.dartagnan.program.event.Event;
import com.dat3m.dartagnan.program.event.Init;
import com.dat3m.dartagnan.program.memory.Address;
import com.dat3m.dartagnan.program.memory.Location;
import com.dat3m.dartagnan.program.utils.EType;
import com.dat3m.dartagnan.wmm.filter.FilterBasic;

import java.io.*;
import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

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
            fw.write("void reach_error() {\n");
            fw.write("assert(0);\n");
            fw.write("}\n");
            fw.write("void __VERIFIER_assert(int cond) {\n");
            fw.write("if(!cond) {\n");
            fw.write("reach_error();\n");
            fw.write("}\n");
            fw.write("}\n");
            fw.write("\n");
            fw.write("extern void __VERIFIER_HARDWARE(char * str);\n");

            fw.write("enum fence{After_atomic," +
                    "Before_atomic," +
                    "Isync," +
                    "Lwsync," +
                    "Mb," +
                    "Mfence," +
                    "Rcu_lock," +
                    "Rcu_unlock," +
                    "Rmb," +
                    "Sync," +
                    "Sync_rcu," +
                    "Wmb," +
                    "Ish };\n"
            );
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
                        fw.write(
                                e.AsmToC()
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
            for(Location l : p.getLocations()) {
                fw.write("int " + l.getName()
                        + " = atomic_load_explicit("+ l.getAddress()+", memory_order_relaxed);\n");
            }
            // TODO
            fw.write("assert(" + p.getAss().AsmToC() + ")" + ";\n");

            // END MAIN
            fw.write("return 0;\n");
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
    public void writeGlobalVars(Thread t) {
        try {
            FileWriter fw = new FileWriter(filepath, true);
            if(!(t.getEntry() instanceof Init) && t.getRegisterNames().size() > 0) {
                ArrayList<String> regNames = t.getRegisterNames();
                for(String reg : regNames) {
                    fw.write("int " + reg + "_" + String.valueOf(t.getId()) + ";\n");
                }
                fw.flush();
                fw.close();
            }
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
                    boolean b = false;
                    for(PointerLocation ploc : prog.getPtrLocMap()) {
                        if(ploc.getPtr().equals(reg) && ploc.getThreadID() == t.getId())
                            b = true;
                    }
                    if(!b)
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
                boolean b = false;
                for(PointerLocation ploc : prog.getPtrLocMap()) {
                    if(ploc.getPtr().equals(reg) && ploc.getThreadID() == t.getId())
                        b = true;
                }
                if(!b)
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
                boolean b = false;
                for(PointerLocation ploc : prog.getPtrLocMap()) {
                    if(ploc.getPtr().equals(reg) && ploc.getThreadID() == t.getId())
                        b = true;
                }
                if(!b)
                    fw.write(reg + "_" + String.valueOf(t.getId()) + " = " + reg + ";\n");
                //fw.write( config.getStructVarName(t.getId()) + "." + reg + " = " + reg + ";\n");
                //fw.write( config.getStructVarName(t.getId()) + "." + reg + " = " + reg + ";\n");

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

    /*
    How this works: currently, xml-style tags are used to mark variables. Go through all tags
    and check if the register is in list of pointer locations (list where a register corresponds to the
    address of a global variable).
    replace the register if it exists in list, otherwise remove the tag.
     */
    public void processCustomTags() {
        String content = "";
        try {
            BufferedReader br = new BufferedReader(new FileReader(filepath));
            String line;
            while ((line = br.readLine()) != null) {
                // do regex check
                Pattern pattern = Pattern.compile("<customTag(.+?)>(.+?)</customTag>", Pattern.DOTALL);
                Matcher matcher = pattern.matcher(line);
                int mcount = 0;
                while(matcher.find()) {
                    System.out.println("Matcher :" + String.valueOf(mcount) + " |" + matcher.group());
                    mcount++;
                    int reg_thread = Integer.parseInt(matcher.group(1));
                    String reg = matcher.group(2);

                    boolean set = false;
                    for(PointerLocation ploc : prog.getPtrLocMap()) {
                        System.out.println("REG: " + reg);
                        if(ploc.getPtr().equals(reg) && ploc.getThreadID() == reg_thread) {
                            reg = ploc.getLoc();
                            break;
                        }
                    }

                    if(reg.charAt(0) == '&') {
                        reg = reg.substring(1);
                    }
                    System.out.println("Replacing" + line + "with " + reg);
                    line = line.replaceFirst("<customTag(.+?)>(.+?)</customTag>", reg);

                }
                content += line + '\n';
            }
            FileWriter fw = new FileWriter(filepath);
            fw.write(content);
            fw.flush();
            fw.close();
        }
        catch(java.io.IOException ex) {
            System.out.println("Error writing function declaration of function ");
            ex.printStackTrace();
        }
    }

    public void processAssertionTags() {
        String content = "";
        try {
            BufferedReader br = new BufferedReader(new FileReader(filepath));
            String line;
            while ((line = br.readLine()) != null) {
                // do regex check
                Pattern pattern = Pattern.compile("<customAssertionTag(.+?)>(.+?)</customAssertionTag>", Pattern.DOTALL);
                Matcher matcher = pattern.matcher(line);
                int mcount = 0;
                while(matcher.find()) {
                    System.out.println("Matcher :" + String.valueOf(mcount) + " |" + matcher.group());
                    mcount++;
                    int reg_thread = Integer.parseInt(matcher.group(1));
                    String reg = matcher.group(2);

                    boolean set = false;
                    for(PointerLocation ploc : prog.getPtrLocMap()) {
                        System.out.println("REG: " + reg);
                        if(ploc.getPtr().equals(reg) && ploc.getThreadID() == reg_thread) {
                            System.out.println("POINTERLOC " + ploc.getPtr());
                            reg = ploc.getLoc();
                            set = true;
                            break;
                        }
                    }

                    if(reg.charAt(0) == '&') {
                        reg = reg.substring(1);
                    }
                    System.out.println("Replacing" + line + "with " + reg);
                    if(set) {
                        line = line.replaceFirst("<customAssertionTag(.+?)>(.+?)</customAssertionTag>", reg);
                    } else {
                        line = line.replaceFirst("<customAssertionTag(.+?)>(.+?)</customAssertionTag>", reg + "_" + Integer.parseInt(matcher.group(1)));
                        //line = line.replaceFirst("<customAssertionTag(.+?)>(.+?)</customAssertionTag>", "thread_local_" + Integer.parseInt(matcher.group(1)) + "." + reg);
                    }


                }
                content += line + '\n';
            }
            FileWriter fw = new FileWriter(filepath);
            fw.write(content);
            fw.flush();
            fw.close();
        }
        catch(java.io.IOException ex) {
            System.out.println("Error writing function declaration of function ");
            ex.printStackTrace();
        }
    }
}

// DS reg->addr
// asmToC -> writeToFile <
//