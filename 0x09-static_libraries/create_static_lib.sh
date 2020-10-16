#!/bin/bash
gcc -Werror -Wall -Wextra -pedantic -c *.c
ar rcs liball.a *.o
