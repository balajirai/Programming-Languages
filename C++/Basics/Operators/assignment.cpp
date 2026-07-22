#include <iostream>

int main() {
    
    int x = 10;

    x += 5;
    std::cout << "x += 5  : " << x << '\n';

    x -= 3;
    std::cout << "x -= 3  : " << x << '\n';

    x *= 2;
    std::cout << "x *= 2  : " << x << '\n';

    x /= 4;
    std::cout << "x /= 4  : " << x << '\n';

    x %= 3;
    std::cout << "x %= 3  : " << x << '\n';

    return 0;
}

/*
Expected Output:
x += 5  : 15
x -= 3  : 12
x *= 2  : 24
x /= 4  : 6
x %= 3  : 0
*/