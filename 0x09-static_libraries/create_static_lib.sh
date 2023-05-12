#!/bin/bash

gcc -Wall -Wextra -Werror -pedantic -c $(ls *.c | grep -v 'mian.c')
ar rc liball.a *.o

ranlib liball.a
