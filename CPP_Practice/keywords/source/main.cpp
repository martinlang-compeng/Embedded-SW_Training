#include <iostream>
#include <string>
#include <vector>

// Namespace
// Provides a solution for preventing name conflicts in large projects.
// Each entity needs a unqiue name, but with a namespace we can have
// identical entitiy names.
namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

// using
// For reducing the need to type namespaces for each usage of a variable or function in that namespace.
// We can use the "using namespace <namespace>" command. However, it is highly recommended to not use this and
// instead just use "using <function or variable of that namespace" instead to ensure safe and reliable code
// Example:
using std::string;
using std::cout;

// typedef
// reserved keyword used to create an additional name (alias) for another data type
// New identifier for an existing. It helps with readability and reduces typo
// Think of this as a nickname for a data type
// The new identifier usually follows the naming convention <name>_t
typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;

// The "using" keyword is usually favored over the "typedef" keyword
// This is because it is more suitable for templates
using text_t = std::string;
using number_t = int;


int main() {
    // The const keyword specifies that a variable's value is constant and cannot be modified by the compiler
    // This is essentially forcing the variable to be read-only
    const double PI = {3.14159}; // common naming convention for consts is to make all letters uppercase

    double radius = {10};
    double circumference = 2*PI*radius;

    std::cout << "Circumference Calculation is: " << circumference << " cm\n";

    // Namespace usage example
    int x = 3;
    std::cout << "Local variable - x: " << x << "\n";
    std::cout << "Namespace first - x: " << first::x << "\n";
    std::cout << "Namespace second - x: " << second::x << "\n";

    // typedef usage example
    pairlist_t my_pairlist;
    text_t my_typedef_str = "This is a typedef or using string";
    std::cout << my_typedef_str << "\n";

    return 0;
}