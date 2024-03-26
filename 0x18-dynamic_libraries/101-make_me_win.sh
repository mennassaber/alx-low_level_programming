#!/bin/bash
gcc -Wall -fPIC -shared -o inject.so -nostartfiles -nostdlib inject.c
export LD_PRELOAD=./inject.so
