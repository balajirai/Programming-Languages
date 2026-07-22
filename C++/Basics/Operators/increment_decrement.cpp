#include <iostream>

int main() {
    
    int x = 5;

    std::cout << "x   = " << x << '\n';
    std::cout << "x++ = " << x++ << '\n'; // Post-increment
    std::cout << "x   = " << x << '\n';

    std::cout << "++x = " << ++x << '\n'; // Pre-increment

    std::cout << "x-- = " << x-- << '\n'; // Post-decrement
    std::cout << "x   = " << x << '\n';

    std::cout << "--x = " << --x << '\n'; // Pre-decrement

    return 0;
}

/*
Expected Output:
x   = 5
x++ = 5
x   = 6
++x = 7
x-- = 7
x   = 6
--x = 5
*/