#include <iostream>

// Returns the sum
int add(int a, int b) {
    return a + b;
}

int main() {
    
    int result = add(7, 8);

    std::cout << result << '\n';
}

/*
Output:
15
*/