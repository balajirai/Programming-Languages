#include <iostream>

int main() {
    
    for (int i = 1; i <= 10; i++) {
        if (i == 6) {
            // Exit loop
            break;
        }

        std::cout << i << '\n';
    }

    return 0;
}