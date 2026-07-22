#include <iostream>

int main() {
    
    int i = 0;
    double d = 0;
    char c = 'A';

    std::cout << "sizeof(int)    = " << sizeof(int) << '\n';
    std::cout << "sizeof(double) = " << sizeof(double) << '\n';
    std::cout << "sizeof(char)   = " << sizeof(char) << '\n';

    std::cout << "sizeof(i) = " << sizeof(i) << '\n';
    std::cout << "sizeof(d) = " << sizeof(d) << '\n';
    std::cout << "sizeof(c) = " << sizeof(c) << '\n';

    return 0;
}

/*
Expected Output (64-bit system):
sizeof(int)    = 4
sizeof(double) = 8
sizeof(char)   = 1
sizeof(i)      = 4
sizeof(d)      = 8
sizeof(c)      = 1
*/