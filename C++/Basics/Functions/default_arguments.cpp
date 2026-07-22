#include <iostream>

// Default value for name
void greet(std::string name = "Guest") {
    std::cout << "Hello, " << name << "!\n";
}

int main() {
    greet();
    greet("Alice");
}

/*
Output:
Hello, Guest!
Hello, Alice!
*/