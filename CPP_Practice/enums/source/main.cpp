#include <iostream>

enum Day {
    SUNDAY=0,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    // enums = a user-defined data type that consists
    //         of paired name-integer constants.
    //         GREAT if you have a set of potential options
    //         Really useful to replacing hardcoded integers with some readable string-like variable
   
    Day weekday = SUNDAY;

    switch(weekday) {
        case SUNDAY:
            std::cout << "Its the " << weekday << " day of the week\n";
            break;
        case MONDAY:
            std::cout << "Its the " << weekday << " day of the week\n";
            break;
        case TUESDAY:
            std::cout << "Its the " << weekday << " day of the week\n";
            break;
        case WEDNESDAY:
            std::cout << "Its the " << weekday << " day of the week\n";
            break;
        case THURSDAY:
            std::cout << "Its the " << weekday << " day of the week\n";
            break;
        case FRIDAY:
            std::cout << "Its the " << weekday << " day of the week\n";
            break;
        case SATURDAY:
            std::cout << "Its the " << weekday << " day of the week\n";
            break;
    }
    
    return 0;
}