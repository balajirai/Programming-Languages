#include <iostream>

int main() {
    
    std::string name;
    int age;
    double salary;

    std::cout << "Enter name age salary: ";
    std::cin >> name >> age >> salary;

    std::cout << "\nDetails\n";
    std::cout << "Name   : " << name << '\n';
    std::cout << "Age    : " << age << '\n';
    std::cout << "Salary : " << salary << '\n';
}

/*
Sample Input:
Alice 24 65000.5

Expected Output:
Enter name age salary: Alice 24 65000.5

Details
Name   : Alice
Age    : 24
Salary : 65000.5
*/