#!/bin/bash

MY_FIRST_LIST=(one two three four)

for item in ${MY_FIRST_LIST[@]}; do
    echo -n $item | wc -c
done


# -n option in echo:
# The -n option tells echo not to output a newline after printing the text.
# By default, echo appends a newline character (\n) at the end of its output. 
# The -n option suppresses this behavior, so all output is printed on the same line without an automatic line break.

# echo -n $item:  Prints the value of item (which is one of the items in MY_FIRST_LIST) without a trailing newline.
# | wc -c:        Pipes the output of echo to the wc -c command, which counts the number of characters in the output (including spaces but excluding the newline if -n is used).


# With -n:
# echo -n "one" would print "one" (3 characters).
# wc -c would count 3 characters.

# Without -n:
# echo "one" would print "one\n" (3 characters + 1 newline).
# wc -c would count 4 characters due to the newline.