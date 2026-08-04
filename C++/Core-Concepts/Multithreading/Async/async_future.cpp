#include <iostream>
#include <future>

int square(int x) {

    return x * x;
}

int main() {

    // Launch function asynchronously
    std::future<int> result = std::async(square, 5);

    // Wait and get return value
    std::cout << result.get() << '\n';
}
