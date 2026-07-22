#include <iostream>

int main() {
    
    int age = 15;

    // Choose one block
    if (age >= 18) {
        std::cout << "Adult\n";
    } else {
        std::cout << "Minor\n";
    }

    return 0;
}