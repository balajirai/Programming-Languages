#include <iostream>
#include <thread>

void work() {
    std::cout << "Thread is working\n";
}

int main() {

    std::thread t(work);

    // Main waits here until thread finishes
    t.join();

    std::cout << "Thread completed\n";
}
