#ifndef linkedListFuncs_H
#define linkedListFuncs_H

struct Node {
    int data;
    Node* next;
};

Node* merge(Node* head1, Node* head2);


Node* removeTargetValue(Node* head, int target);


Node* sum(Node* head1, Node* head2);

#endif