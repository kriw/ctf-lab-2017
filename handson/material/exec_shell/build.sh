#!/bin/sh
gcc overflow.c
gcc -no-pie -fno-stack-protector simple.c -o simple
