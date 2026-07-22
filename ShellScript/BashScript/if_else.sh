#!/bin/bash

if [ ${1,,} = balaji ]; then
    echo "You are the BOSS!"
elif [ ${1,,} = help ]; then
    echo "Please enter your username"
else
    echo "I don't know who you are"
fi


# ${1,,}:
# This is parameter expansion in Bash.
# The ${1} refers to the first positional argument passed to the script.
# The ,, is a Bash-specific feature that converts the value of the variable to lowercase. 
# So, ${1,,} will convert whatever argument is passed in $1 to lowercase letters.