#!/bin/bash

VERSION=2.0.7

if [ $# -eq 0 ]; then
    echo "No input file supplied"
    exit 0
fi

if [ $1 == "-v" ] || [ $1 == "--version" ]; then
    echo $VERSION
else
    export PATH=$PATH:$HOME/bin:$JAVA_HOME/bin:$(pwd)/smack/bin
    export LD_LIBRARY_PATH=$(pwd)/lib/

    #FLAGS="-w -incrementalSolver"
    #if ! grep -q "pthread" $2; then
    #    FLAGS+=" -o O3 -bp -cat cat/sc.cat"
    #else
    #    FLAGS+=" -cat cat/svcomp.cat"
    #fi
    echo java -jar svcomp/target/svcomp-$VERSION-jar-with-dependencies.jar -cat $1 -t $2 -property $3 -i $4
    java -jar svcomp/target/svcomp-$VERSION-jar-with-dependencies.jar -o O0 -cat $1 -t $2 -property $3 -i $4
fi
