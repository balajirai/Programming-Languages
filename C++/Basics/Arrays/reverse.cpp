#include <iostream>

int main() {
    
    int numbers[] = {10, 20, 30, 40, 50};

    std::cout << "Reversed: ";

    for (int i = 4; i >= 0; i--) {
        std::cout << numbers[i] << ' ';
    }

    std::cout << '\n';
}