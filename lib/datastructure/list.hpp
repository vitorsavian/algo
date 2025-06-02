#pragma once
#include "node.hpp"

namespace datastructure {
    class List {
        private:
            Node *head;
            Node *tail;
            int length;

        public:
            List(Node *initialHead, Node* initialTale, int initialLength);
            ~List();

            void Add(int value);
            int Remove();
            int GetLength() const;
    };
}