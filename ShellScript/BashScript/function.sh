#!/bin/bash

showuptime(){
    local up=$(uptime -p | cut -c4-)
    local since=$(uptime -s)
    cat << EOF
-----------------------------------------------
This machine has been up for ${up}
It has been running since ${since}
-----------------------------------------------
EOF
}

showuptime  # Calling the function

fun_arg(){
    echo Hello $1
}

fun_arg user-argument   # Calling a function with argument


# NOTE: Make sure that there no indentation (not even space after) EOF

# local --> this will make variable local, if we don't use local keyword then variable will be global by default

# uptime -p:
# The uptime -p command returns the system's uptime in a human-readable format. For example, up 2 hours, 3 minutes.

# cut -c4-:
# cut is used here to remove the first three characters (up ), keeping just the meaningful part (e.g., 2 hours, 3 minutes). -c4- means "cut from the 4th character to the end."
# Without cut, the output would have the word "up" included, but we want to exclude that for a cleaner message.

# since=$(uptime -s)
# This defines a variable since and assigns it the result of the uptime -s command.

# uptime -s:
# This command returns the exact date and time when the system was last booted.
# Example output: 2024-10-18 14:30:35, meaning the system was last started on October 18th, 2024, at 2:30 PM.

# cat << EOF
# This line starts a here-document. cat will output everything between the << EOF and the closing EOF.
# EOF is just a delimiter that tells the script where the content of the here-document begins and ends.
# cat will print the content to the terminal, but instead of using multiple echo commands, everything between EOF markers will be treated as the input.
