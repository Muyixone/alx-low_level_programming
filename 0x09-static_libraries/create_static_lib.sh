#!/bin/bash

# Set the directory and extension
directory=$(pwd)
extension=".c"
library_file="liball.a"


for filename in "$directory"/*; do
    if [[ "$filename" == *"$extension" ]]; then
        gcc -c "$filename" -o "${filename%.c}.o"
    fi
done

ar -rcs "$library_file" *.o
