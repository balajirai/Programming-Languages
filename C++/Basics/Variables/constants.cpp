#include <iostream>

int main() {
    
    // Value cannot be changed
    const double PI = 3.14159;

    double radius = 5;
    double area = PI * radius * radius;

    std::cout << "PI: " << PI << '\n';
    std::cout << "Area: " << area << '\n';

    // PI = 3.14; // Error

    return 0;
}

/*
Expected Output:
PI: 3.14159
Area: 78.5397
*/