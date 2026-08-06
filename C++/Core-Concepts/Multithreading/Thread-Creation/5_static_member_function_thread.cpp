#include <iostream>
#include <thread>

// create thread using static member function
class Greet {
public:
    static void greetUser(std::string name) {
        std::cout << "Hello, " << name << " from static member function thread!\n";
        std::cout << "Thread ID: " << std::this_thread::get_id() << '\n';
    }
};

int main(){

    Greet greet;

    // syntax: std::thread thread1(&ClassName::MemberFunction, args...);
    std::thread thread1(&Greet::greetUser, "Alice");

    thread1.join();

    return 0;
}