#include "queue.hpp"
#include "node.hpp"
namespace datastructure {
    Queue::Queue() : queue(nullptr), length(0) {}

    Queue::~Queue() {
        ClearMemory(queue);
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

    int Queue::Remove() {
        if (queue == nullptr) return -1;
        
        Node *temp = queue;
        queue = queue->next;
        delete temp;
        length--;

        return 0;
    }
}