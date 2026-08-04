#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;
int counter = 0;

void increment() {

    // Automatically locks and unlocks
    std::lock_guard<std::mutex> lock(mtx);

    counter++;
}

int main() {

    std::thread t1(increment);
    std::thread t2(increment);

    t1.join();
    t2.join();

    std::cout << "Counter = " << counter << '\n';
}
