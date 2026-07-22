#!/bin/bash

echo "Redirecting output in output.txt:"

echo "This is the output" > output.txt          # This will override the file with new content
echo "Appending more output" >> output.txt      # This will append the new content

# cat output.txt

sleep 5
rm output.txt