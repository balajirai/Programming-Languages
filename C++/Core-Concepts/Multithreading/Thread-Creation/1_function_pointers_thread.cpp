#include <iostream>
#include <thread>

// create thread using function pointer
void greet(std::string name) {
    std::cout << "Hello, " << name << " from function pointer thread!\n";
    std::cout << "Thread ID: " << std::this_thread::get_id() << '\n';
}

int main(){
    
    std::thread thread1(greet, "Alice");   // Create a thread using function pointer
    thread1.join();                        // Wait for the thread to complete
    
    return 0;
}