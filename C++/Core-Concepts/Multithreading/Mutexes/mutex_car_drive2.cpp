#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

void driveCar(std::string driverName) {

    mtx.lock();   // lock the mutex to ensure exclusive access to the car

    std::cout << driverName << " is driving the car.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2)); // Simulate driving time
    std::cout << driverName << " has finished driving the car.\n";

    mtx.unlock();   // unlock the mutex to allow other drivers to drive the car
}

int main(){
    
    std::thread driver1(driveCar, "Alice");
    std::thread driver2(driveCar, "Bob");

    driver1.join();
    driver2.join();

    return 0;
}