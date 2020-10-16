#!/bin/bash
gcc -Werror -Wall -Wextra -pendantic -C *.c
ar rcs liball.a *.o
