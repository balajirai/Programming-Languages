#include <stdio.h>
#include "ex14.h"

int main() {
    int result;
    result = add42(30);
    printf("Result: %i\n", result);
    return 0;
}

// compile & link: gcc -m32 ex14.o ex14.c -o ex14