#pragma once
#include "node.hpp"

namespace datastructure {
    class Queue {
        private:
            Node *queue;
            int lenght;
        public:
            int Remove();
            int Add();     
    };
}