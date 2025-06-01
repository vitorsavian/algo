#include "queue.hpp"
#include "node.hpp"
namespace datastructure {
    Queue::Queue() : queue(nullptr), length(0) {}

    Queue::~Queue() {
        Node *current = queue;
        while (current) {
            Node *next = current->next;
            delete current;
            current = next;
        }

        length = 0;
    }

    int Queue::GetLength() const {
        return length;
    }

    int Queue::Add(int value) {
        Node *node = CreateNode(value, nullptr);
        if (!queue) {
            queue = node;
            length++;
            return 0;        
        } 

        Node *current = queue;
        while (current->next) {
            current = current->next;
        }
        
        current->next = node;
        length++;
        return 0;
    }
}