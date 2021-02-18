#!/bin/bash

GREEN='\033[0;32m'
RED='\033[0;31m'
NC='\033[0m'

failcount=0
find out/ -type f -print0 | while read -d $'\0' file; do
  if [[ $file =~ \.c$ ]]; then
  	clang-10 -c $file -pthread -Wno-return-type
		if [ $? -ne 0 ]; then
		  echo -e "[     ${RED}FAILED${NC}] $file"
		  $failcount += 1
		else
		  echo -e "[ ${GREEN}OK${NC} ] $file"
		fi
  fi 

done

echo -e "$failcount compilations ${RED}FAILED${NC}"
