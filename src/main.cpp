#include <iostream>
#include "datastructure/queue.hpp"
#include "datastructure/stack.hpp"
#include "datastructure/node.hpp"
#include "datastructure/list.hpp"


int main(int argc, const char** argv) {
    std::cout << "Welcome to the Data Structures and Algorithms Library!" << std::endl;
    datastructure::Queue queue;
    datastructure::Stack stack;
    datastructure::List list(nullptr, nullptr, 0);
    return 0;
}