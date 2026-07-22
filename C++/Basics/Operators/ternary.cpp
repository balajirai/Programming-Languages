#include <iostream>

int main() {
    
    int age = 20;

    std::string result = (age >= 18) ? "Adult" : "Minor";

    std::cout << result << '\n';

    return 0;
}

/*
Expected Output:
Adult
*/