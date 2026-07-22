#include <iostream>

int main() {
    
    int i = 1;

start:
    std::cout << i << '\n';
    i++;

    // Jump to label
    if (i <= 5) {
        goto start;
    }

    return 0;
}