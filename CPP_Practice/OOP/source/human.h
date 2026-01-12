#ifndef HUMAN_H
#define HUMAN_H

#include <string>

class Human {
    public:
        // Constructor
        Human(std::string name, std::string occupation, int age)
        : _name(name), _occupation(occupation), _age(age) {}

        // Oveloaded constructor = multiple constructors w/ same name but different parameters
        //                         Allows for varying of arguments when instantiating an object
        Human(std::string name, std::string occupation, int age, char gender)
        : _name(name), _occupation(occupation), _age(age), _gender(gender) {}
        
        // Destructor
        ~Human() {}

        // Get Methods
        std::string getName()               { return _name; }
        std::string getOccupation()         { return _occupation; }
        int getAge()                        { return _age; }
        
        // Set Methods
        void setName(std::string name);
        void setOccupation(std::string occupation);
        void setAge(int age);

        // Helper Methods
        void printInfo();

    private:
        // Private Attributes
        std::string _name;
        std::string _occupation;
        int _age;
        char _gender;
};


#endif // HUMAN_H