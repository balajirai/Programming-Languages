#!/bin/bash

spinner=('\' '|' '/' '-')

spin(){
    while true; do
        for i in "${spinner[@]}"; do
            echo -ne "\r$i"
            sleep 0.1
        done
    done
}

spin