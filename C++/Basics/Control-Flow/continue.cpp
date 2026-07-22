#include <iostream>

int main() {
    
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            // Skip iteration
            continue;
        }

        std::cout << i << '\n';
    }

    return 0;
}