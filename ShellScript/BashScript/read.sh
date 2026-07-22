#!/bin/bash

echo What is your first name?
read FIRST_NAME

echo "What's your last name?"       # echo What's your last name?   ---> Wrong---> apostrophe <'> is considered as single inverted comma and is not closed anywhere
read LAST_NAME

echo Hello, $FIRST_NAME $LAST_NAME.