#include <iostream>

int main() {
    
    int a = 10;
    int b = 3;

    std::cout << "a + b = " << a + b << '\n';
    std::cout << "a - b = " << a - b << '\n';
    std::cout << "a * b = " << a * b << '\n';
    std::cout << "a / b = " << a / b << '\n'; // Integer division
    std::cout << "a % b = " << a % b << '\n';

    return 0;
}

/*
Expected Output:
a + b = 13
a - b = 7
a * b = 30
a / b = 3
a % b = 1
*/