#include <iostream>
#include "datastructure/queue.hpp"
#include "datastructure/stack.hpp"
#include "datastructure/node.hpp"
#include "datastructure/list.hpp"
#include "sum.cpp"

int main(int argc, const char** argv) {
    std::cout << "Welcome to the Data Structures and Algorithms Library!" << std::endl;

    int *arr = new int[5]{1, 2, 3, 4, 5};

    int test = int{3};

    sum<int *>(&arr);
    
    // datastructure::Queue queue;
    // datastructure::Stack stack;
    // datastructure::List list(nullptr, nullptr, 0);
    
    return 0;
}