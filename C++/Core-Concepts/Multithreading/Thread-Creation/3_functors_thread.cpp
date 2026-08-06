#include <iostream>
#include <thread>

// create thread using functors
class Greet {
public:
    void operator()(std::string name) {
        std::cout << "Hello, " << name << " from functor thread!\n";
        std::cout << "Thread ID: " << std::this_thread::get_id() << '\n';
    }
};

int main(){
    
    Greet greet;
    std::thread thread1(greet, "Charlie");
    thread1.join();

    return 0;
}