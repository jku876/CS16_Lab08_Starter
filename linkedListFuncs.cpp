#include "linkedListFuncs.h"
#include <stddef.h>

using namespace std;

/*Given the head of a linked list, find and return the kth node of the linked list
 *Assume head is the first node
 *If k is larger than the size of the linked list, return NULL
 *All methods must be implemented recursively!*/
Node* findKthNode(Node *head, int k){
    if(!head){
        return NULL;
    }
    if(k==1){
        return head;
    }
    return findKthNode(head->next,k-1);
}

/*Given the head of a linked list, delete the first k nodes from the linked list
 *k will always be less than the length of the linked list
 *All methods must be implemented recursively!*/
Node* removeKFromFront(Node *head, int k) {
    if(k == 0) {
        return head;
    }
    Node *temp = head->next;
    delete head;
    return removeKFromFront(temp, k-1);
}

/*Given two linked lists, return a linked-list where each element is the sum of the corresponding elements of the input*/
/*All methods must be implemented recursively!*/
Node* sum(Node *head1, Node *head2) {
    if(!head1 && !head2){
        return NULL;
    }
    Node *n1 = new Node;
    if(!head1){
        n1->data = head2->data;
        n1->next = sum(NULL, head2->next);
    }else if(!head2){
        n1->data = head1->data;
        n1->next = sum(head1->next, NULL);
    }else{
        n1->data = head1->data + head2->data;
        n1->next = sum(head1->next, head2->next);
    }
    return n1;
}

/*Given two linked lists, splice the two linked lists together, alternating elements from each one*/
/*All methods must be implemented recursively!*/
Node* splice(Node *head1, Node *head2) {
    if(!head1){
        return head2;
    }
    if(!head2){
        return head1;
    }
    Node *n1 = head1->next;
    Node *n2 = head2->next;
    head1->next = head2;
    head2->next = splice(n1,n2);
    return head1;
}
