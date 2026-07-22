#include <iostream>

int main() {
    
    int source[] = {10, 20, 30, 40, 50};
    int destination[5];

    for (int i = 0; i < 5; i++) {
        destination[i] = source[i];
    }

    std::cout << "Copied array: ";

    for (int i = 0; i < 5; i++) {
        std::cout << destination[i] << ' ';
    }

    std::cout << '\n';
}