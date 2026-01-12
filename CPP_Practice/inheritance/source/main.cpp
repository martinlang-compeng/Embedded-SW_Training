#include <iostream>
#include "animal.h"

int main() {
    // inheritance = A class can recieve attributes and methods from another class
    //               Children classes inherit from Parent classes
    //               Helps to reuse similar code within multiple classes

    Dog kaiser = Dog("Kaiser", "Shitzu", 2, true);
    Dog juni = Dog("Juni", "Havanese Poodle", 3, true);
    Cat garfield = Cat("Garfield", "Orange baby", 100, false);

    kaiser.printInfo();
    juni.printInfo();
    garfield.printInfo();

    return 0;
}