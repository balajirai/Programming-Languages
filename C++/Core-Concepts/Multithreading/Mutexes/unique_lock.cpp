#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

void work() {

    std::unique_lock<std::mutex> lock(mtx);

    std::cout << "Critical section\n";

    lock.unlock();      // Can unlock early

    std::cout << "Outside critical section\n";
}

int main() {

    std::thread t(work);

    t.join();
}
