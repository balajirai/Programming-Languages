#include <iostream>

int main() {
    
    int age = 20;
    bool hasLicense = true;

    // Outer condition
    if (age >= 18) {
        // Inner condition
        if (hasLicense) {
            std::cout << "Can drive\n";
        } else {
            std::cout << "License required\n";
        }
    } else {
        std::cout << "Too young\n";
    }

    return 0;
}