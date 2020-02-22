#ifndef linkedListFuncs_H
#define linkedListFuncs_H
#include <stddef.h>

struct Node {
    int data;
    Node* next;
};

Node* merge(Node* head1, Node* head2);


Node* removeKFromFront(Node *head, int k);


Node* sum(Node* head1, Node* head2);

#endif