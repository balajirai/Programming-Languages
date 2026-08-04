#include <iostream>
#include <thread>

void hello() {
    std::cout << "Hello from thread\n";
}

int main() {
    std::thread t(hello);   // Create a thread

    t.join();               // Wait for thread to finish

    std::cout << "Main thread finished\n";
}
