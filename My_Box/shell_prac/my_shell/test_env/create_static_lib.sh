#!/bin/bash
for f in *.c; do gcc -c $f; done
for g in *.o; do ar -rcs liball.a $g; done

