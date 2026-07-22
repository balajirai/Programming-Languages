#!/bin/bash

echo "Hiding the cursor"

echo -ne "\e[?25l"         # Hide the cursor

echo "writing something"
sleep 0.3
echo "writing something"
sleep 0.3
echo "writing something"
sleep 0.3
echo "writing something"
sleep 0.3
echo "writing something"
sleep 0.3
echo "writing something"
sleep 0.3

echo -e "\nShowing the cursor"

echo -ne "\e[?25h"         # Show the cursor

echo "writing something"
sleep 0.3
echo "writing something"
sleep 0.3
echo "writing something"
sleep 0.3
echo "writing something"
sleep 0.3
echo "writing something"
sleep 0.3
echo "writing something"
sleep 0.3