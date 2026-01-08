#include <iostream>
#include <string>

struct Student {
    std::string name;
    double gpa;
    bool enrolled;
};

void printStudentInfo(Student * student) {
    std::cout << "Student " << student->name << " has a gpa of " << student->gpa << " and is currently " << ((student->enrolled) ? "enrolled" : "not enrolled") << "\n";
}

int main() {
    // struct = A structure that groups related variables under one name
    //          Structs can contain many different data types
    //          Variables in a struct are known as members
    //          Members can be accessed with '.' (Class Member Access Operator)
    //          If a pointer is assigned to a struct, the members have to be accessed via '->' operator

    Student student_1;
    student_1.name = "John Doe";
    student_1.gpa = 3.4;
    student_1.enrolled = true;

    printStudentInfo(&student_1);

    Student * student_2 = new Student;
    student_2->name = "Jane Doe";
    student_2->gpa = 4.0;
    student_2->enrolled = false;

    printStudentInfo(student_2);

    delete(student_2);

    return 0;
}