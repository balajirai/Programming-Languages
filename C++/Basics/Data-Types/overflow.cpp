#include <iostream>
#include <climits>

int main() {
    
    int value = INT_MAX;

    std::cout << "Before: " << value << '\n';

    // Overflow
    value++;

    std::cout << "After : " << value << '\n';

    return 0;
}