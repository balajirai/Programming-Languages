#include <iostream>

int main() {
    
    int i = 1;

    // Runs at least once
    do {
        std::cout << i << '\n';
        i++;
    } while (i <= 5);

    return 0;
}