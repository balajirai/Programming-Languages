#include <iostream>

int main() {
    
    bool a = true;
    bool b = false;

    std::cout << "a && b = " << (a && b) << '\n';
    std::cout << "a || b = " << (a || b) << '\n';
    std::cout << "!a     = " << (!a) << '\n';
    std::cout << "!b     = " << (!b) << '\n';

    return 0;
}

/*
Expected Output:
a && b = 0
a || b = 1
!a     = 0
!b     = 1
*/