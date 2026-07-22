#!/bin/bash

MY_FIRST_LIST=(one two three four)

echo $MY_FIRST_LIST             # The name of array will show the first element of array (as array name is pointer to its first element)
echo ${MY_FIRST_LIST[1]}        # Here we're accessing the element at 1st index (i.e second position) of array 
echo ${MY_FIRST_LIST[@]}        # This will '@' will access all index of the array hereby accessing all elements of the array