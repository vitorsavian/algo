#pragma once
#include "node.hpp"

namespace datastructure {
    class Stack {
        private:
            Node *stack;
            int length;
        public:
            Stack();
            ~Stack();
            int Pop();
            int Push(int value);     
    };
}