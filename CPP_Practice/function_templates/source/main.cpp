#include <iostream>
#include <string>

// This function template allows us to have different parameter types
template <typename T, typename U>

// auto tells compilier to deduce what the return type should be
auto max(T a, U b) {
    return (a > b) ? a : b;
}

int main() {

    // function template = describes what a function looks like.
    //                      Can be used to generate as many overloaded functions as needed
    //                      where each one is using different data types
    std::cout << max(1,2) << "\n";
    std::cout << max(1.4, 1.3) << "\n";
    std::cout << max('a', 'b') << "\n";

    return 0;
}