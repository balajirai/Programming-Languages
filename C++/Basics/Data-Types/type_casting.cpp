#include <iostream>

int main() {
    double pi = 3.99;

    // Explicit cast
    int value = static_cast<int>(pi);

    std::cout << "Double : " << pi << '\n';
    std::cout << "Int    : " << value << '\n';

    return 0;
}