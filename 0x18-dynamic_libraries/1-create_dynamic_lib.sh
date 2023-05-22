#!/bin/bash

source_files=$(find . -name "*.c")

for file in $source_files; do
    filename=$(basename "$file" .c)
    gcc -c -fPIC "$file" -o "$filename.o"
done

gcc -shared *.o -o liball.so
