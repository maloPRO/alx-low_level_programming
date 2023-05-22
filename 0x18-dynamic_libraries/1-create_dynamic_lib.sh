#!/bin/bash

source_files=$(find . -name "*.c")

object_files=""
for file in $source_files; do
    filename=$(basename "$file" .c)
    gcc -c -fPIC "$file" -o "$filename.o"
    object_files+=" $filename.o"
done

gcc -shared $object_files -o liball.so