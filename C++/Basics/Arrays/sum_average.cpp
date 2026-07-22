#include <iostream>

int main() {
    
    int numbers[] = {10, 20, 30, 40, 50};
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    int average = sum / 5;     // Integer division

    std::cout << "Sum: " << sum << '\n';
    std::cout << "Average: " << average << '\n';
}