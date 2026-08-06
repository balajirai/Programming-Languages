#include <iostream>
#include <thread>

// create thread using lambda function

int main(){
    
    std::thread thread1([](std::string name) {
        std::cout << "Hello, " << name << " from lambda function thread!\n";
        std::cout << "Thread ID: " << std::this_thread::get_id() << '\n';
    }, "Bob");
    
    thread1.join();  // Wait for the thread to complete
    
    return 0;
}