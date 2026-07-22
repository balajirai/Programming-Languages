#include <iostream>

int main() {
    
    bool isStudent = true;
    char grade = 'A';
    int age = 22;
    float height = 5.9f;
    double pi = 3.1415926535;
    long long population = 8100000000LL;

    std::cout << "bool      : " << isStudent << '\n';
    std::cout << "char      : " << grade << '\n';
    std::cout << "int       : " << age << '\n';
    std::cout << "float     : " << height << '\n';
    std::cout << "double    : " << pi << '\n';
    std::cout << "long long : " << population << '\n';

    return 0;
}