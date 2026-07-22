#include <iostream>

int main() {
    
    int a = 5;
    int b = 10;

    int result = (a++, b++);

    std::cout << "a = " << a << '\n';
    std::cout << "b = " << b << '\n';
    std::cout << "result = " << result << '\n'; // Last expression

    return 0;
}

/*
Expected Output:
a = 6
b = 11
result = 10
*/