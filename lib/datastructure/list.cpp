#include "list.hpp"
#include "node.hpp"

namespace datastructure {
    List::List(Node *initialHead, Node* initialTale, int initialLength) : head(initialHead), tail(initialTale), length(initialLength) {};

    List::~List() {
        ClearMemory(head);
    };

    void List::Add(int  value) {
        Node *newNode = CreateNode(value, nullptr);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        length++;       
    }

    int List::Remove() {
        if (head == nullptr) return -1; // List is empty

        Node *temp = head;
        int value = temp->value;

        head = head->next;
        delete temp;

        if (head == nullptr) tail = nullptr; // List is now empty
        length--;

        return value;
    }


}