#include <iostream>
#include <thread>
#include <chrono>

void work() {

    std::this_thread::sleep_for(std::chrono::seconds(2));

    std::cout << "Detached thread finished\n";
}

int main() {

    std::thread t(work);

    t.detach();    // Thread runs independently

    std::cout << "Main exits\n";

    std::this_thread::sleep_for(std::chrono::seconds(3));
}
