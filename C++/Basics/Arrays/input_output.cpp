#include <iostream>

int main() {
    
    int numbers[5];

    std::cout << "Enter 5 numbers: ";

    for (int i = 0; i < 5; i++) {
        std::cin >> numbers[i];
    }

    std::cout << "Array: ";

    for (int i = 0; i < 5; i++) {
        std::cout << numbers[i] << ' ';
    }

    std::cout << '\n';
}