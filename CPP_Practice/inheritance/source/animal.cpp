#include <iostream>
#include "animal.h"

void Animal::setName(std::string name) {
    _nick_name = name;
}

void Animal::setScientificName(std::string name) {
    _scientific_name = name;
}

void Animal::setAge(int age) {
    _age = age;
}

void Animal::printInfo() {
    std::cout << "Animal Nick Name: " << _nick_name << "\n";
    std::cout << "Animal Scientifc Name: " << _scientific_name << "\n";
    std::cout << "Animal Age: " << _age << "\n";
    std::cout << "Animal is alive: " << (_alive ? "true" : "false") << "\n";
}

void Dog::bark() {
    std::cout << this->getNickName() << " has barked\n";
}

void Cat::meow() {
    std::cout << this->getNickName() << " has meowed\n";
}