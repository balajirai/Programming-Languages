#include <iostream>

// Function prototype
int square(int n);


// Main function
int main() {
    std::cout << square(5) << '\n';
}

// Function definition
int square(int n) {
    return n * n;
}

/*
Output:
25
*/