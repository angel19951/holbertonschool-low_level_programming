#!/bin/bash
gcc -Werror -Wall -Wextra -pedantic *.c -c -fPIC
gcc *.o -shared -o liball.so
