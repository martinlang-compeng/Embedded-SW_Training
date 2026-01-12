#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

// Parent Class
class Animal {
    public:
        // Constructor
        Animal(std::string name1, std::string name2, int age)
        : _nick_name(name1), _scientific_name(name2), _age(age) {}

        // Oveloaded constructor = multiple constructors w/ same name but different parameters
        //                         Allows for varying of arguments when instantiating an object
        Animal(std::string name1, std::string name2, int age, bool alive)
        : _nick_name(name1), _scientific_name(name2), _age(age), _alive(alive) {}
        
        // Destructor
        ~Animal() {}

        // Get Methods
        std::string getNickName()               { return _nick_name; }
        std::string getScientificName()         { return _scientific_name; }
        int getAge()                        { return _age; }
        bool getAlive()                     { return _alive; }
        
        // Set Methods
        void setName(std::string name);
        void setScientificName(std::string name);
        void setAge(int age);

        // Helper Methods
        void printInfo();

    private:
        // Private Attributes
        std::string _nick_name;
        std::string _scientific_name;
        int _age;
        bool _alive;
};

// Child Classes
class Dog : public Animal {
    public:
        // Only available C++ 11 or higher
        using Animal::Animal; 
        // Manual forwarding (pre C++ 11)
        // Dog(std::string name1, std::string name2, int age) : Animal(name1, name2, age) {}
        void bark();
};

class Cat : public Animal {
    public:
        // Only available C++ 11 or higher
        using Animal::Animal; 
        // Manual forwarding (pre C++ 11)
        // Cat(std::string name1, std::string name2, int age) : Animal(name1, name2, age) {}
        void meow();
};


#endif // ANIMAL_H