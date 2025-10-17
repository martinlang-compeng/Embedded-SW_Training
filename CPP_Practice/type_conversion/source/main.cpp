#include <iostream>

int main() {
    // type converison
    // Conversion of a value of one data type to another
    // Implicit = automatic
    // Explicit = Precede value with new data type

    // Implicit Cast
    double x = (int) 3.14;
    std::cout << "Implicit Cast Example 1: " << x << "\n";

    // Another example with char
    char y = 100;
    std::cout << "Implicit Cast Example 2: " << y << "\n";

    // Explicit Cast
    std::cout << "Explicit Cast Example 1: " << (char) 102 << "\n";

    // Another example
    int correct = 10;
    int questions = 12;
    double score = correct / (double) questions * 100;
    std::cout << "Explicit Cast Example 2: " << score << "\n";

    return 0;
}