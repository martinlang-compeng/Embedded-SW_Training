#include <iostream>
#include <string>

void walk_iterative(int num_steps) {
    for(int i = 0; i < num_steps; i++) {
        std::cout << "(ITERATIVE) You took a step\n";
    }
}

void walk_recursive(int num_steps) {
    if(num_steps > 0) {
        std::cout << "(RECURSIVE) You took a step\n";
        walk_recursive(num_steps-1);
    }
}

int main() {
    // recursion = a programming technique where a function invokes itself from within
    //             break a complex concept into a repeatable single steps

    // (iterative vs recursive)
    // advantages = less code and is cleaner
    //              useful for sorting and searching algorithms
    // disadvantages = uses more memory and is often slower
    //                 You can also risk entering infinite recursions resulting in stack overflow


    // iterative approach
    walk_iterative(10);

    // recursive approach
    walk_recursive(10);

    return 0;
}