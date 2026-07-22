#include <iomanip>
#include <iostream>

int main() {
    
    double pi = 3.1415926535;

    std::cout << "Default : " << pi << '\n';

    // Fixed decimal places
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Fixed   : " << pi << '\n';

    // Scientific notation
    std::cout << std::scientific;
    std::cout << "Scientific: " << pi << '\n';
}

/*
Expected Output:
Default : 3.14159
Fixed   : 3.14
Scientific: 3.141593e+00
*/