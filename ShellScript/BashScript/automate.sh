#!/bin/bash

start=$(date +%s%3N)

for (( i=0; i<100; i++ )); do
    mkdir -p dir1/$i
done

end=$(date +%s%3N)
duration=$((end - start))

echo "Time taken: $duration milliseconds"