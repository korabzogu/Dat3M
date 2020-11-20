package Thesis;

public class CFileConfig {
    // replaces <id> with the thread id, eg. mystruct_<id> -> mystruct_0 or another_<id>_struct -> another_0_struct
    private String structNamingScheme;
    private String functionNamingScheme;
    private String threadNamingScheme;

    // structVarScheme is the naming scheme for the global variabls, structNamingScheme is the naming scheme
    // for the struct definitions. so the definition of the global struct variable goes as follows:
    // structNamingScheme structVarScheme; e.g. struct_0 struct_0_var; struct_0_var.register1 = 0;
    private String structVarScheme;
    CFileConfig(String pathToFile) {

    }
    CFileConfig(String structNamingScheme,
                String structVarScheme,
                String functionNamingScheme,
                String threadNamingScheme) {
        this.structNamingScheme = structNamingScheme;
        this.structVarScheme = structVarScheme;
        this.functionNamingScheme = functionNamingScheme;
        this.threadNamingScheme = threadNamingScheme;
    }
    public String getStructName(int ThreadID) {
        return structNamingScheme.replace("<id>", String.valueOf(ThreadID));
    }
    public String getStructVarName(int ThreadID) {
        return structVarScheme.replace("<id>", String.valueOf(ThreadID));
    }

    public String getFunctionName(int ThreadID) {
        return functionNamingScheme.replace("<id>", String.valueOf(ThreadID));
    }
    public String getThreadName(int ThreadID) {
        return threadNamingScheme.replace("<id>", String.valueOf(ThreadID));
    }
}
