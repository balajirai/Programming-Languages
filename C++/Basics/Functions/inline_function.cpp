#include <iostream>

// Suggest inline expansion
inline int square(int n) {
    return n * n;
}

int main() {
    std::cout << square(6) << '\n';
}

/*
Output:
36
*/