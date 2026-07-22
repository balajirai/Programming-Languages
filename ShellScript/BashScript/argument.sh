#!/bin/bash

echo Hello, $1 $2       # echo "Hello, $1 $2"  --> this is also the same

echo \$0: $0
echo \$1: $1
echo \$2: $2

# NOTE: positional argument $0 is reserved for the command (bash) itself.