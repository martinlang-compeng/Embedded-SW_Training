#include <iostream>
#include <string>

int main() {
    std::string username = "";
    
    // These examples expect no spaces from user input
    // If user input contains spaces, 
    // then the entry following the space will be used in the second cin call
    // Example: 
    // If username entered is Martin Lang, then username will print Martin
    // While age will print "0", since "Lang" is the next standard input string to be accepted
    std::cout << "Please enter your name: ";
    std::cin >> username;
    std::cout << "Your name is: " << username << "\n";

    int age = {0};

    std::cout << "What is your age: ";
    std::cin >> age;
    std::cout << "Your age is: " << age << "\n";

    // Using getline with cin to get the full line
    std::string my_line = "";

    std::cout << "Enter anything on this line: ";
    // The std::ws used here is prevent the getline call to retrieve any whitespaces or newline characters from previous calls
    std::getline(std::cin >> std::ws, my_line);
    std::cout << "Your line: " << my_line << "\n";

    return 0;
}