#include <iostream>
#include <thread>

void function1(char symbol) {
    for(int i=0; i<200; i++) {
        std::cout << symbol;
    }
}

void function2(char symbol) {
    for(int i=0; i<200; i++) {
        std::cout << symbol;
    }
}

int main(){
    
    // without multithreading, the output will be sequential
    // function1('+');      // 200 plus signs
    // function2('-');      // 200 minus signs  


    // with multithreading, the output will be interleaved
    std::thread worker1(function1, '+');
    std::thread worker2(function2, '-');

    worker1.join();
    worker2.join();

    return 0;
}