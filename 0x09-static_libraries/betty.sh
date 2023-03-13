#!/bin/bash

# Loop through all files ending with .c in the current directory
for file in *.c; do
  # Run the betty command on the file
  betty "$file"
done

