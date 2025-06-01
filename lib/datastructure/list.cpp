#include "list.hpp"
#include "node.hpp"

namespace datastructure {
    List::List(Node *initialHead, Node* initialTale, int initialLength) : head(initialHead), tail(initialTale), length(initialLength) {};

    List::~List() {
        ClearMemory(this->head);
    };

    void List::Add(int  value) {
        Node *newNode = CreateNode(value, nullptr);
        if (this->head == nullptr) {
            this->head = newNode;
            this->tail = newNode;
        } else {
            this->tail->next = newNode;
            this->tail = newNode;
        }
        this->length++;       
    }

    int List::Remove() {
        if (this->head == nullptr) return -1; // List is empty

        Node *temp = this->head;
        int value = temp->value;

        this->head = this->head->next;
        delete temp;

        if (this->head == nullptr) this->tail = nullptr; // List is now empty
        this->length--;

        return value;
    }


}