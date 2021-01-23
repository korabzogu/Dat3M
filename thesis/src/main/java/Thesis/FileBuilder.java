package Thesis;

import com.dat3m.dartagnan.parsers.program.utils.PointerLocation;
import com.dat3m.dartagnan.program.Program;
import com.dat3m.dartagnan.program.Thread;
import com.dat3m.dartagnan.program.event.Init;

import java.lang.StringBuilder;
import java.util.ArrayList;

public class FileBuilder {
    /*
    private String filepath;
    private Program program;
    private CFileConfig config;
    StringBuilder CFile;

    public FileBuilder(String filepath, Program program, CFileConfig config) {
        this.filepath = filepath;
        this.program = program;
        this.config = config;
        CFile = new StringBuilder();
    }
    public void buildCFile() {

         * General layout for the C Program:
         * 1. headers
         * 2. implementation of structs which hold the same local variables as their corresponding functions
         * 3. declaration of the global variables, which are:
         * 3.1 the previously defined structs
         * 3.2 global integer variables taken from the litmus file
         * 4. prototypes of the functions that are to be started in their own thread
         * 5. implementation of the functions
         * 6. the main function, which consists of:
         * 6.1 declaring the thread variables
         * 6.2 starting all defined functions in their own threads
         * 6.3 joining all threads
         * 6.4 

        // headers
        CFile.append("include <pthread.h>\n");
        CFile.append("include <assert.h>\n");
        CFile.append("include <stdio.h>\n");
        CFile.append("include <stdatomic.h>\n");

        // struct implementation. every function has a corresponding struct for variable propagation
        for(Thread thread : program.getThreads()) {
            if(!(thread.getEntry() instanceof Init) && thread.getRegisterNames().size() > 0) {
                //cfw.writeFunctionStruct(thread);
                CFile.append("struct " + config.getStructName(thread.getId()) + " {\n");
                ArrayList<String> regNames = thread.getRegisterNames();
                for(String reg : regNames) {
                    boolean b = false;
                    for(PointerLocation ploc : program.getPtrLocMap()) {
                        if(ploc.getPtr().equals(reg))
                            b = true;
                    }
                    if(!b)
                        CFile.append("int " + reg + ";\n");
                }
                CFile.append("};\n");
            }
        }

        // the structs have to be declared as global variables
        for(Thread thread : program.getThreads()) {
            CFile.append("struct " + config.getStructName(t.getId()) + " " + config.getStructVarName(thread.getId()) + ";\n");
        }
    }
    public void writeFile() {
        // write CFile.toString() to file
    }

*/
}
