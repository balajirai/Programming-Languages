#include <iostream>
#include <thread>

void printNumber(int n) {
    std::cout << "Number: " << n << '\n';
}

int main() {
    std::thread t(printNumber, 10);   // Pass argument to function

    t.join();
}
