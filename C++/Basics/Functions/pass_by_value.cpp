#include <iostream>

// Copy is modified
void increment(int x) {
    x++;
}

int main() {
    
    int value = 10;

    increment(value);

    std::cout << value << '\n';
}

/*
Output:
10
*/