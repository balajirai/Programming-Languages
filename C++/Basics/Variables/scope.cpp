#include <iostream>

int value = 100; // Global variable

int main() {
    
    int value = 10; // Local variable

    {
        int value = 1; // Block variable
        std::cout << "Block: " << value << '\n';
    }

    std::cout << "Local: " << value << '\n';
    std::cout << "Global: " << ::value << '\n';

    return 0;
}

/*
Expected Output:
Block: 1
Local: 10
Global: 100
*/