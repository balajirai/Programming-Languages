#!/bin/bash

echo This is first line $'\n'
echo This is second line after gap of one line.
echo This is another line without any gap.

echo -e "\nLine 1\nLine 2\n"
echo Next line

# NOTE: $'\n'   --> this is a newline character, also we can use -e option to just use \n