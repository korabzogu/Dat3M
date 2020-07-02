package Thesis;

import java.io.FileWriter;
import java.util.ArrayList;

import com.dat3m.dartagnan.program.event.Event;

public class Tool {
    public static void main(String[] args) {

        ArrayList<String> headers = new ArrayList<String>();
        headers.add("pthread.h");
        headers.add("stdio.h");

        writeHeaders(headers);
        writeMain();


    }
    static public void writeHeaders(ArrayList<String> headers) {
        try {
            FileWriter fw = new FileWriter("thesis/out/tmp.c");
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
    static public void writeMain() {
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
        } catch(java.io.IOException e) {
            System.out.println("Error writing headers");
            e.printStackTrace();
        }
    }
}