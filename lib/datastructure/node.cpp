#include "node.hpp"

namespace datastructure {
    Node *CreateNode(int value, Node *next) {
        Node *node = new Node{
            value,
            next,
        };

        return node;
    };

    int DeleteNode(Node *node) {

        return 0;
    };

    int ClearMemory(Node *node) {
        if (node == nullptr) {
            return 1;
        }

        Node *aux = node->next;

        while (aux != nullptr) {
            node->next = aux->next;
            delete aux;
            aux = node->next;
        }
 
        delete node;

        return 0;
    };
}
