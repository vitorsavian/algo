#include "stack.hpp"
#include "node.hpp"

namespace datastructure {
   Stack::Stack() : stack(nullptr), length(0) {}

    Stack::~Stack() {
         ClearMemory(stack);
         length = 0;
    }

    int Stack::Push(int value) {
        Node *node = CreateNode(value, nullptr);
        if (!stack) {
            stack = node;
            length++;
            return 0;
        }

        node->next = stack;
        stack = node;
        length++;
        return 0;
    }

    int Stack::Pop() {
        if (stack == nullptr) return -1;

        Node *temp = stack;
        stack = stack->next;
        delete temp;
        length--;   

        return 0;
    }
}