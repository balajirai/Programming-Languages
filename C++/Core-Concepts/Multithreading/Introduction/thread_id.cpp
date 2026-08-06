#include <iostream>
#include <thread>

// Get the thread ID of the current thread
void printThreadId() {
    std::thread::id threadId = std::this_thread::get_id();
    std::cout << "Thread ID: " << threadId << '\n';
}

int main(){

    std::thread t(printThreadId);  // Create a thread to print its ID
    t.join();                      // Wait for the thread to finish

    // thread id of main function?
    std::thread::id mainThreadId = std::this_thread::get_id();
    std::cout << "Main Thread ID: " << mainThreadId << '\n';

    return 0;
}