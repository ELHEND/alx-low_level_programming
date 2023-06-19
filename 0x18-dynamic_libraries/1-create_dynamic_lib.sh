#!/bin/bash
# Compile all .c files into object files
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c
# Create dynamic library liball.so from object files
gcc -shared -o liball.so *.o
# Clean up object files
rm *.o
