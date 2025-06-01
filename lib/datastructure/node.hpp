#pragma once

namespace datastructure {
    struct Node
    {
        int value;
        Node* next;
    };

    Node* CreateNode(int value, Node *next);
    int DeleteNode(Node *node);
    int ClearMemory(Node *node);
}