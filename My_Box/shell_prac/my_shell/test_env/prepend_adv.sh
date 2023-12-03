#!/bin/bash

if [ "$#" -ne 3 ]; then
	echo "Usage: $0 [#_of_lines] <src_file> <dest_file>"
	exit 1
fi

lines="$1"
src_file="$2"
dest_file="$3"

echo "$(head -"$lines" "$src_file")" | cat - "$dest_file" > temp && mv temp "$dest_file"
echo "Successfully prepended first $lines from $src_file into $dest_file"
exit 0
