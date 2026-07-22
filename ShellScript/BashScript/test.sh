#!/bin/bash

test 8 = 8          # Checks the condition as true (1) or false (0)
echo $?             # $?  --> return/exited code of last executed command


[ 10 = 11 ]         # This square bracket is used to test expression (equivalent to test statement as above)
echo $?


[ 1 -eq 1 ]         # Make sure to give space between bracket and other data (whether opening or closing)
echo $?