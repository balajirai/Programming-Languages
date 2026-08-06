#include <iostream>
#include <thread>

void work() {
    std::cout << "Thread is working\n";
}

int main() {

    std::thread t(work);

    // Main waits here until thread finishes
    t.join();

    // lets say I'm trying to join again
    // t.join();  // This will throw an exception because the thread has already been joined

    // so better approach is to check if the thread is joinable before joining
    if (t.joinable()) {
        t.join();
    } 
    else {
        std::cout << "Thread is not joinable\n";
    }

    std::cout << "Thread completed\n";
}
