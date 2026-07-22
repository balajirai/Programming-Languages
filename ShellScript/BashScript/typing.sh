#!/bin/bash

sentence="My name is Balaji, I'm a software engineer"

for (( i=0; i<${#sentence}; i++ )); do
    echo -n "${sentence:$i:1}"
    sleep 0.05
done

echo