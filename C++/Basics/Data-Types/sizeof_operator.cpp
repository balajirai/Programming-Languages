#include <iostream>

int main() {
    
    std::cout << "bool      : " << sizeof(bool) << " bytes\n";
    std::cout << "char      : " << sizeof(char) << " bytes\n";
    std::cout << "int       : " << sizeof(int) << " bytes\n";
    std::cout << "float     : " << sizeof(float) << " bytes\n";
    std::cout << "double    : " << sizeof(double) << " bytes\n";
    std::cout << "long long : " << sizeof(long long) << " bytes\n";

    return 0;
}