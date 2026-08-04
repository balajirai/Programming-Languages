#include <iostream>
#include <thread>

thread_local int value = 0;

void work(int id) {

    value = id;

    std::cout << "Thread " << id
              << " value = "
              << value
              << '\n';
}

int main() {

    std::thread t1(work, 1);
    std::thread t2(work, 2);

    t1.join();
    t2.join();
}
