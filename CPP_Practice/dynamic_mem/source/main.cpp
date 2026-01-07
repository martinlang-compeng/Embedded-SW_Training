#include <iostream>
#include <string>

int main() {
    // Dynamic memory = Memory that is allocated after the program
    //                  is already compiled & running.
    //                  Use the 'new' operator to allocate memory and the 'delete' operator to free up the memory
    //                  This type of memory is considered HEAP memory, where as statically declared variables are considered STACK memory

    //                  This type of memory is useful when we don't know how much memory
    //                  we will need. Gives us more flexibility but comes at a risk if not treated carefully

    /********WARNING ********/
    // Not using the 'delete' operator after running the 'new' operator 
    // can cause memory leaks and at worse cause segmentation faults in your program

    int *p_num = nullptr;
    
    // Creating new memory for variable pointer
    p_num = new int;
    *p_num = 21;

    std::cout << "The p_num address and value is: " << p_num << " " << *p_num << "\n";

    // Deleting and freeing up memory for variable pointer
    delete(p_num);
    p_num = nullptr;


    // Creating new memory for array pointer
    char * p_grades = nullptr;
    p_grades = new char[10];

    for(int i = 0; i < (sizeof(p_grades)/sizeof(p_grades[0])); i++) {
        p_grades[i] = ('A' + i);
        std::cout << "p_grades[" << i << "] == " << p_grades[i] << "\n";
    }

    // Deleting and freeing up memory for array pointer
    delete[] p_grades;
    p_grades = nullptr;

    return 0;
}