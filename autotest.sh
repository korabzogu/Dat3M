command='/usr/lib/jvm/java-1.11.0-openjdk-amd64/bin/java -javaagent:/home/gwinrond/.local/share/JetBrains/Toolbox/apps/IDEA-U/ch-0/201.7846.76/lib/idea_rt.jar=41877:/home/gwinrond/.local/share/JetBrains/Toolbox/apps/IDEA-U/ch-0/201.7846.76/bin -Dfile.encoding=UTF-8 -classpath /home/gwinrond/BA/Dat3M/thesis/target/classes:/home/gwinrond/BA/Dat3M/dartagnan/target/classes:/home/gwinrond/.m2/repository/com/microsoft/z3/4.3.2/z3-4.3.2.jar:/home/gwinrond/.m2/repository/com/google/guava/guava/27.0.1-jre/guava-27.0.1-jre.jar:/home/gwinrond/.m2/repository/com/google/guava/failureaccess/1.0.1/failureaccess-1.0.1.jar:/home/gwinrond/.m2/repository/com/google/guava/listenablefuture/9999.0-empty-to-avoid-conflict-with-guava/listenablefuture-9999.0-empty-to-avoid-conflict-with-guava.jar:/home/gwinrond/.m2/repository/com/google/code/findbugs/jsr305/3.0.2/jsr305-3.0.2.jar:/home/gwinrond/.m2/repository/org/checkerframework/checker-qual/2.5.2/checker-qual-2.5.2.jar:/home/gwinrond/.m2/repository/com/google/errorprone/error_prone_annotations/2.2.0/error_prone_annotations-2.2.0.jar:/home/gwinrond/.m2/repository/com/google/j2objc/j2objc-annotations/1.1/j2objc-annotations-1.1.jar:/home/gwinrond/.m2/repository/org/codehaus/mojo/animal-sniffer-annotations/1.17/animal-sniffer-annotations-1.17.jar:/home/gwinrond/.m2/repository/org/antlr/antlr4-runtime/4.7.2/antlr4-runtime-4.7.2.jar:/home/gwinrond/.m2/repository/commons-cli/commons-cli/1.4/commons-cli-1.4.jar com.dat3m.thesis.Tool'

#ARG=-i litmus/AARCH64/ATOM/Z6.5+poxxs.litmus -cat cat/svcomp.cat


for f in litmus/**/*.litmus ; do
	echo $f
	mkdir -p litmustests/$(dirname $f)
	$command -i $f -cat cat/svcomp.cat > litmustests/$f.out
	cp thesis/out/tmp.c litmustests/$f.c
done;


