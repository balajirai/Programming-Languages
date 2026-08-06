#include <iostream>
#include <thread>

// create thread using non-static member function
class Greet {
public:
    void greetUser(std::string name) {
        std::cout << "Hello, " << name << " from non-static member function thread!\n";
        std::cout << "Thread ID: " << std::this_thread::get_id() << '\n';
    }
};

int main(){

    Greet greet;

    // syntax: std::thread thread1(&ClassName::MemberFunction, &object, args...);
    std::thread thread1(&Greet::greetUser, &greet, "Alice");

    thread1.join();

    return 0;
}