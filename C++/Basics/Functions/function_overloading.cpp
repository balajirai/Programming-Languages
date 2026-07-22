#include <iostream>

// Same name, different parameters
int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int main() {
    std::cout << add(2, 3) << '\n';
    std::cout << add(2.5, 3.1) << '\n';
}

/*
Output:
5
5.6
*/