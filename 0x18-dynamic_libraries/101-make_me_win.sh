#!/bin/bash

echo 'echo "--> Please make me win!"' > /tmp/winjackpot.c
gcc -Wall -fPIC -shared -o /tmp/winjackpot.so /tmp/winjackpot.c -ldl
LD_PRELOAD=/tmp/winjackpot.so ./gm 9 8 10 24 75 9
