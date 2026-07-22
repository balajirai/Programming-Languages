#include <iostream>

int main() {
    
    int a = 5;  // 0101
    int b = 3;  // 0011

    std::cout << "a & b  = " << (a & b) << '\n';
    std::cout << "a | b  = " << (a | b) << '\n';
    std::cout << "a ^ b  = " << (a ^ b) << '\n';
    std::cout << "~a     = " << (~a) << '\n';
    std::cout << "a << 1 = " << (a << 1) << '\n';
    std::cout << "a >> 1 = " << (a >> 1) << '\n';

    return 0;
}

/*
Expected Output:
a & b  = 1
a | b  = 7
a ^ b  = 6
~a     = -6
a << 1 = 10
a >> 1 = 2
*/