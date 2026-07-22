#include <iostream>

int main() {
    
    int a = 10;
    int b = 20;

    std::cout << (a == b) << '\n';
    std::cout << (a != b) << '\n';
    std::cout << (a < b)  << '\n';
    std::cout << (a > b)  << '\n';
    std::cout << (a <= b) << '\n';
    std::cout << (a >= b) << '\n';

    return 0;
}

/*
Expected Output:
0
1
1
0
1
0
*/