#include <iostream>
#include "human.h"

void Human::setName(std::string name) {
    _name = name;
}

void Human::setOccupation(std::string occupation) {
    _occupation = occupation;
}

void Human::setAge(int age) {
    _age = age;
}

void Human::printInfo() {
    std::cout << "Human Name: " << _name << "\n";
    std::cout << "Human Occupation: " << _occupation << "\n";
    std::cout << "Human Age: " << _age << "\n";
}