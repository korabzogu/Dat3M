#/bin/bash!

echo "start making yml files"
while IFS=, read -r file result;
do
	echo "$file $result"
	yml=thesis/out/$(echo $file | rev | cut -f 2- -d '.' | rev).yml
	cfile=thesis/out/$(echo $file | rev | cut -f 2- -d '.' | rev).c
	echo "CFILE: $cfile"
	if  test -f $cfile; then
	        cbase=$(basename $(echo $file | rev | cut -f 2- -d '.' | rev).c)
		verdict=false
		if [ $result -eq 0 ];
		    then verdict=true 
		fi
		if grep -qw "~exist" $file; then
			if [ $result -eq 0 ]; then
				verdict=false
			else
				verdict=true
			fi
		fi

		if grep -qw "forall" $file; then
			if [ $result -eq 0 ]; then
				verdict=false
			else
				verdict=true
			fi
		fi

		echo -e "format_version: '2.0'\ninput_files: '$cbase'\n\nproperties:\n  - property_file: /home/gwinrond/Abgabe/Dat3M/unreach-call.prp\n    expected_verdict: $verdict\n\nlanguage: C\ndata_model: ILP32" > $yml
	else
		echo "$cfile does not exist"
	fi 
done
