#include <iostream>
 // C++ string library
 // This is sometimes confused with string.h
 // string.h is the C library for strings
#include <string>

int main() {
    // Simple data types and variables
    // Integer variables store whole numbers
    // If you assign decimals to integers, the numbers after the decimal point will be truncated
    // Integer size is 4 bytes
    int my_int;                         // Integer variable declaration
    my_int = 2;                         // Integer variable definition
    int my_int2 = {10};                 // Integer variable declaration + definition
    
    std::cout << "Integer: " << my_int2 << "\n";

    // Double variables can store decimal numbers
    // Double size is 8 bytes
    double price = 10.99;               // Double variable declaration + definition
    double gpa = 3.9;

    std::cout << "Double: " << price << "\n";
    
    // Char variables store a single character
    // Char size is 1 bytes
    char grade = 'A';                   // Char variable declaration + definition
    char first_initial = 'M';
    char currency = '$';

    std::cout << "Char: " << first_initial << "\n";

    // Boolean variables store either true or false
    // Boolen size is 1 bytes
    bool is_studying = true;            // Boolean variable declaration + definition

    std::cout << "Boolean: " << is_studying << "\n";

    // String variables store a sequence of chars
    // String size is dependent on how many chars are sequenced together
    std::string my_name = "Martin";     // String variable declartion + definition

    std::cout << "String: " << my_name << "\n";

    return 0;
}