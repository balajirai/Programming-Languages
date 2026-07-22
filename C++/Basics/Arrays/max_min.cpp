#include <iostream>

int main() {
    
    int numbers[] = {25, 10, 40, 5, 30};

    int maximum = numbers[0];
    int minimum = numbers[0];

    for (int i = 1; i < 5; i++) {
        if (numbers[i] > maximum) {
            maximum = numbers[i];
        }

        if (numbers[i] < minimum) {
            minimum = numbers[i];
        }
    }

    std::cout << "Maximum: " << maximum << '\n';
    std::cout << "Minimum: " << minimum << '\n';
}