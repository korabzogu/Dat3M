package Thesis;
import Thesis.Tool;
import com.dat3m.dartagnan.AbstractDartagnanTest;
import com.dat3m.dartagnan.parsers.program.ProgramParser;
import com.dat3m.dartagnan.program.Program;
import com.dat3m.dartagnan.utils.ResourceHelper;
import com.dat3m.dartagnan.utils.Result;
import com.dat3m.dartagnan.wmm.utils.Arch;
import com.dat3m.dartagnan.wmm.Wmm;
import com.dat3m.dartagnan.utils.Settings;
import org.apache.commons.io.FileUtils;
import org.apache.commons.io.filefilter.DirectoryFileFilter;
import org.apache.commons.io.filefilter.RegexFileFilter;
import org.junit.Test;
import org.junit.runners.Parameterized;
import org.junit.runner.RunWith;

import java.io.File;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.List;

@RunWith(Parameterized.class)
public class LitmusAutoRunner {
    private String iflag;
    private String path;
    private String catflag;
    private String catpath;
    public LitmusAutoRunner(String iflag, String path, String catflag, String catpath) {
        this.iflag = iflag;
        this.catflag = catflag;
        this.path = path;
        this.catpath = catpath;
    }

    @Test
    public void test() {
        try {
            Tool.main(new String[]{iflag,path,catflag,catpath});
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
    @Parameterized.Parameters(name = "{index}: {1}")
    public static Collection<String[]> data() {
        List<String[]> result = new ArrayList<>();

        //result.add(new String[]{"-i", "../litmus/AARCH64/SYS/RWC+addr+dmb.sy.litmus", "-cat","cat/svcomp.cat"});

        List<String> blacklist = new ArrayList<>();
        blacklist.add("../litmus/C/lockfree/Michael-Scott.litmus");
        try {
            Files.walk(Paths.get("../litmus/"))
                    .filter(Files::isRegularFile)
                    .filter(a -> a.toString().endsWith(".litmus") && !(blacklist.contains(a.toString())))
                    .forEach(f -> result.add(new String[]{"-i",f.toString(),"-cat","cat/svcomp.cat"}));
        } catch (IOException e) {
            e.printStackTrace();
        }
        return result;

    }
}
