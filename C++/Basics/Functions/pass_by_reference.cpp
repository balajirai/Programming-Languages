#include <iostream>

// Original variable is modified
void increment(int &x) {
    x++;
}

int main() {
    
    int value = 10;

    increment(value);

    std::cout << value << '\n';
}

/*
Output:
11
*/