#!/bin/bash

echo "Words in count.txt:"

echo "This is the file for word count" > count.txt


wc -w count.txt        # Output : <word_count> <file_name>    [here we're passing file-name as positional argument to wc command]
wc -w < count.txt      # Output : <word_count>                [here we're redirecting the file to wc command]

# echo $'\n'Count the words of a string until typed EOF
# wc -w << EOF                            # This will ask user input of words until user type EOF in terminal

echo $'\n'Count the words of a string
wc -w <<< "hi welcome there"               # Output : <word_count>                [here we're redirecting the string to wc command]

# cat count.txt

# sleep 5
rm count.txt