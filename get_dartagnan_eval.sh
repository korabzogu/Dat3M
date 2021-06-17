#/bin/bash!

# call dartagnan on all litmus files, then save the result with the litmus file name to a file

resultfile=$1
rm dartagnan_results.txt
for file in litmus/**/*.litmus litmus/**/**/*.litmus litmus/**/**/**/*.litmus litmus/**/**/**/**/*.litmus
do
	arch=$(echo $file | awk -F'/' '{print $2}')
	catfile=$(
		case $arch in
			("AARCH64") echo "cat/aarch64.cat" ;;
			("C") echo "cat/linux-kernel.cat" ;;
			("PPC") echo "cat/power.cat" ;;
			("X86") echo "cat/tso.cat" ;;
		esac
		)
	echo "$file"
	echo "$catfile"
	echo "$(date)"
	#if [[ "$arch" == "X86" ]]; then
		echo "RUNNING"
	        echo "$file" >> $resultfile
		java -jar dartagnan/target/dartagnan-2.0.7-jar-with-dependencies.jar -cat $catfile -i $file >> $resultfile 
        #fi

done
