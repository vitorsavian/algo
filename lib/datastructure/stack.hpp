#pragma once
#include "node.hpp"

namespace datastructure {
    class Stack {
        private:
            Node *queue;
            int length;
        public:
            int Pop();
            int Push();     
    };
}