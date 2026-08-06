#include <iostream>
#include <thread>

void hello() {
    std::cout << "Hello from thread\n";
}


// creating multiple threads at same time does not guarantee the order of execution.
// for example
// std::thread t1(hello);
// std::thread t2(hello);
// it is not guaranteed that t1 will execute before t2, it may happen that t2 executes before t1.

int main() {
    std::thread t(hello);   // Create a thread

    t.join();               // Wait for thread to finish

    std::cout << "Main thread finished\n";
}
