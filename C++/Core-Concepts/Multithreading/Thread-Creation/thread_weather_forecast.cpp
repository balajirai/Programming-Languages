#include <iostream>
#include <thread>
#include <map>
#include <string>
#include <chrono>
// #include <unistd.h>  // Linux
// #include <windows.h> // Windows


void refreshWeatherForecast(std::map<std::string, int> &forecastMap) {
    while (true) {
        std::cout << "Refreshing weather forecast...\n";
        for (auto &entry : forecastMap) {
            entry.second += 1; // Simulate temperature change
            std::cout << "City: " << entry.first << ", Temperature: " << entry.second << "°F\n";
        }

        std::this_thread::sleep_for(std::chrono::seconds(2)); // Simulate delay (cross-platform)
        
        // sleep(2); // Simulate delay 2 seconds (uncomment if using unistd.h)
        // Sleep(2000); // Simulate delay 2 seconds (uncomment if using windows.h)
    }
}


int main(){

    std::map<std::string, int> forecastMap = {
        {"New York", 75},
        {"Los Angeles", 80},
        {"Chicago", 65},
        {"Houston", 90},
        {"Phoenix", 100}
    };

    std::thread backgroundWorker(refreshWeatherForecast, std::ref(forecastMap));

    backgroundWorker.join();

    // refreshWeatherForecast(forecastMap); // Call the function directly in the main thread
    
    return 0;
}
