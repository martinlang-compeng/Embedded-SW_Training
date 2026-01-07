#include <iostream>
#include <string>

int main() {
    // memory address = a location in memory where data is stored
    // a memory address can be accessed with & (address-of operator)

    std::string name = "Bro"; // takes 3 bytes of memory
    int age = 21; // takes 4 bytes of memory
    bool student = true; // takes 1 byte of memory

    std::cout << &name << "\n";
    std::cout << &age << "\n";
    std::cout << &student << "\n";

    return 0;
}