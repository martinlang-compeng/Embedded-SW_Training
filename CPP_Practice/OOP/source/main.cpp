#include <iostream>
#include "human.h"

int main() {
    // object = A collection of attributes and methods
    //          They can have characteristics and could perform actions
    //          Can be used to mimic real work items
    //          Created from a class which acts as a 'blue-print'

    Human human_1 = Human("John", "Engineer", 28);
    Human human_2 = Human("Jet", "Writer", 27);

    human_1.printInfo();
    human_2.printInfo();

    return 0;
}