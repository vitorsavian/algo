#pragma once

namespace datastructure {
    struct Node
    {
        int value;
        Node* next;
    };

    Node* CreateNode(int value, Node *next);
    int ClearMemory(Node *node);
}