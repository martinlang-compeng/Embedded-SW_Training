#include <iostream>
#include <string>
#include <vector>

int main() {
    // arithmetic operators
    // They return the result of a specific arithmetic operation
    // Operators follow PEDMAS rule
    // Example: +, *, -, /
    int x = 20;
    int y = 10;
    int result = {0};
    
    // Addition;
    result = x + y;
    std::cout << "Addition result: " << result << "\n";
    // Subtraction;
    result = x - y;
    std::cout << "Subtraction result: " << result << "\n";
    // Multiplication
    result = x * y;
    std::cout << "Multiplication result: " << result << "\n";
    // Division
    result = x / y;
    std::cout << "Division result: " << result << "\n";

    // Incrementing and Decrementing by 1
    result++;
    std::cout << "Incrementing result by 1: " << result << "\n";
    result--;
    std::cout << "Decrementing result by 1: " << result << "\n";

    // Modulo operator (returns remainder)
    // This is very useful to determine if a integer is odd or even
    result = x % 6;
    std::cout << "Modulo result: " << result << "\n";

    return 0;
}