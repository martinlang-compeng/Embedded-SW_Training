#include <iostream>
#include <string>

int main() {
    // pointers = variable that stores a memory address of another variable
    //            sometimes it's easier tow ork with an address

    // & (address-of operator)
    // * (dereference operator)

    std::string name = "Martin";
    std::string *p_name = &name; // This now points to the address of variable name

    int ages[5] = {21, 2, 3, 4, 5};
    int *p_ages = ages; // For arrays, the array itself is already an address, so no need to use the & operator

    // Print out pointer value
    std::cout << "The value of pointer p_name is the address of name: " << p_name << "\n";

    // Print out the derefenced pointer value
    std::cout << "The derefenced value of pointer p_name is: " << *p_name << "\n";

    // Print out each memory address and value of the array pointer
    for(unsigned i = 0; i < sizeof(ages)/sizeof(ages[0]); i++) {
        std::cout << "\nThe address of element " << i << " is: " << (p_ages + i);
        std::cout << "\nThe value at that address is " << *(p_ages + i); 
    }
    std::cout << "\n";

    // Null value = a special value that means something has no value.
    //              when a pointer is holding a null value, it is not pointing to anything
    //              Note if we try to dereference a null pointer, it most likely will lead to undefined behaviour

    // nullptr = keyword that represents a null pointer literal
    //           This is very helpful in determining if an address was successfully assigned to a pointer
    if(p_ages == nullptr) {
        std::cout << "Pointer p_ages is not pointing to anything\n";
    } else {
        std::cout << "Pointer p_ages is currently pointing the address: " << p_ages << "\n";
    }

    return 0;
}