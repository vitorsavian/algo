#pragma once
#include "node.hpp"

namespace datastructure {
    class Queue {
        private:
            Node *queue;
            int length;
        public:
            Queue();
            ~Queue();
            int GetLength() const; 
            int Remove();
            int Add(int value);            
    };
}