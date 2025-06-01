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

            // void Add(int value) {
            //     Node *newNode = CreateNode(value, nullptr);
            //     if (head == nullptr) {
            //         head = newNode;
            //         tail = newNode;
            //     } else {
            //         tail->next = newNode;
            //         tail = newNode;
            //     }
            //     length++;
            // }

            // int Remove() {
            //     if (head == nullptr) return -1; // List is empty

            //     Node *temp = head;
            //     int value = temp->value;

            //     head = head->next;
            //     delete temp;

            //     if (head == nullptr) tail = nullptr; // List is now empty
            //     length--;

            //     return value;
            // }

            // int GetLength() const {
            //     return length;
            // }

            // ~List() {
            //     ClearMemory(head);
            // }
    };
}