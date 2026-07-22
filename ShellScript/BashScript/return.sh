#!/bin/bash

fun1(){
    echo $1
    if [ ${1,,} = balaji ]; then
        return 0
    else
        return 1
    fi
}

fun1 $1

if [ $? = 1 ]; then
    echo "You're Unknown to me"
else
    echo "Hello Boss!"
fi