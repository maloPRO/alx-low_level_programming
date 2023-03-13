#!/bin/bash

# Compile all .c files in the current directory into object files
gcc -c *.c

ar rcs liball.a *.o

rm *.o

