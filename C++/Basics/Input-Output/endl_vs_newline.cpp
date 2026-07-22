#include <iostream>

int main() {
    
    std::cout << "Using endl" << std::endl; // Flushes buffer
    std::cout << "Line 2" << std::endl;

    std::cout << "Using \\n\n"; // Faster
    std::cout << "Line 4\n";
}

/*
Expected Output:
Using endl
Line 2
Using \n
Line 4
*/