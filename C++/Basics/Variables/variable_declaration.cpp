#include <iostream>

int main() {
    
    int age;
    double salary;
    char grade;
    bool isStudent;

    age = 22;
    salary = 45000.50;
    grade = 'A';
    isStudent = true;

    std::cout << "Age: " << age << '\n';
    std::cout << "Salary: " << salary << '\n';
    std::cout << "Grade: " << grade << '\n';
    std::cout << "Student: " << isStudent << '\n';

    return 0;
}

/*
Expected Output:
Age: 22
Salary: 45000.5
Grade: A
Student: 1
*/