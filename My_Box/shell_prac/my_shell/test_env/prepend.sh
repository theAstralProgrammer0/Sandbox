#!/bin/bash

if [ "$#" -ne 2 ]; then
	echo "Usage $0 <Text_to_prepend> <file_name>"
	exit 1
fi	

text_to_ppend="$1"
target_file="$2"

echo -e "$text_to_ppend" | cat - "$target_file" > temp && mv temp "$target_file"

exit 0
