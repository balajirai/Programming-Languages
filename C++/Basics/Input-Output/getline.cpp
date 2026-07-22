#include <iostream>
#include <string>

int main() {
    
    std::string name;

    std::cout << "Enter your full name: ";
    std::getline(std::cin, name);

    std::cout << "Hello, " << name << "!\n";
}

/*
Sample Input:
John Doe

Expected Output:
Enter your full name: John Doe
Hello, John Doe!
*/