#include <iostream>
#include <thread>

void driveCar(std::string driverName) {
    std::cout << driverName << " is driving the car.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2)); // Simulate driving time
    std::cout << driverName << " has finished driving the car.\n";
}

int main(){
    
    std::thread driver1(driveCar, "Alice");
    std::thread driver2(driveCar, "Bob");

    driver1.join();
    driver2.join();

    /*
    Alice is driving the car.
    Bob is driving the car.
    Alice has finished driving the car.
    Bob has finished driving the car.

    But how can Bob drive the car while Alice is driving it?
    First Alice has to finish driving the car before Bob can drive it. 
    This is a race condition. 
    We need to use a mutex to ensure that only one driver can drive the car at a time.
    
    */

    return 0;
}