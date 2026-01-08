#ifndef HUMAN_H
#define HUMAN_H

#include <string>

class Human {
    public:
        // Constructor
        Human(std::string name, std::string occupation, int age)
        : _name(name), _occupation(occupation), _age(age) {}
        // Destructor
        ~Human() {}

        // Get Functions
        std::string getName()               { return _name; }
        std::string getOccupation()         { return _occupation; }
        int getAge()                        { return _age; }
        
        // Set Functions
        void setName(std::string name);
        void setOccupation(std::string occupation);
        void setAge(int age);

        // Helper Functions
        void printInfo();

    private:
        std::string _name;
        std::string _occupation;
        int _age;
};


#endif // HUMAN_H