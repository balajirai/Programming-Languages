#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

std::mutex mtx;
std::condition_variable cv;

bool ready = false;

void worker() {

    std::unique_lock<std::mutex> lock(mtx);

    // Wait until ready becomes true
    cv.wait(lock, [] {
        return ready;
    });

    std::cout << "Worker started\n";
}

int main() {

    std::thread t(worker);

    {
        std::lock_guard<std::mutex> lock(mtx);
        ready = true;
    }

    cv.notify_one();

    t.join();
}
