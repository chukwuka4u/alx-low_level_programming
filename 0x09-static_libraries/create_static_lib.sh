#!/bin/bash
gcc -c -Wno-unused-parameter -Wall -pedantic -Wextra *.c
ar -rcs liball.a *.o
