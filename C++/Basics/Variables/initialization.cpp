#include <iostream>

int main() {
    
    // Copy initialization
    int a = 10;

    // Direct initialization
    int b(20);

    // Uniform initialization (recommended)
    int c{30};

    std::cout << a << '\n';
    std::cout << b << '\n';
    std::cout << c << '\n';

    return 0;
}

/*
Expected Output:
10
20
30
*/