#include "linkedListFuncs.h"
#include "tddFuncs.h"
#include <iostream>
using namespace std;

int main() {
    //Tests the splice function
	startTestGroup("RETURNS_SPLICED_LINKED_LIST");
    Node e2 = {2, NULL};
    Node e1 = {1, &e2};

    Node e4 = {4, NULL};
    Node e3 = {3, &e4};

    vector<Node*> v1{&e1, &e3, &e2, &e4}; 
    Node *h = splice(&e1, &e3);
    assertEquals(v1, h, "Equal length");

    Node e6 = {6, NULL};
    Node e5 = {5, &e6};

    vector<Node*> v2{&e5, &e6};
    h = splice(NULL, &e5);
    assertEquals(v2, h, "Non-empty and empty");

    vector<Node*> v3{&e1, &e5, &e3, &e6, &e2, &e4};
    h = splice(&e1, &e5);
    assertEquals(v3, h, "Different length");

    //Test the removeKFromFront function
    startTestGroup("REMOVE_K_NODES_FROM_THE_FRONT_OF_THE_LIST");
    Node* a1 = new Node();
    Node* a2 = new Node();
    Node* a3 = new Node();
    Node* a4 = new Node();
    Node* a5 = new Node();

    a1->data = 1;
    a2->data = 2;
    a3->data = 3;
    a4->data = 4;
    a5->data = 5;

    a1->next = a2;
    a2->next = a3;
    a3->next = a4;
    a4->next = a5;
    a5->next = NULL;

    Node* p = removeKFromFront(a1, 3);
    assertEquals(listToString(p), "4 5 ", "Remove k from front");

    //Test the sum function
    startTestGroup("SUM_OF_TWO_LINKED_LISTS");
    Node n3 = {3, NULL};
    Node n2 = {2, &n3};
    Node n1 = {1, &n2};

    Node n6 = {6, NULL};
    Node n5 = {5, &n6};
    Node n4 = {4, &n5}; 

    Node n9 = {9, NULL};
    Node n8 = {7, &n9};
    Node n7 = {5, &n8};

    Node *h1 = sum(&n1, &n4);
    assertEquals(listToString(h1), listToString(&n7), "Equal length");

    n3.next = &n4;
    Node n15 = {6, NULL};
    Node n14 = {5, &n15};
    Node n13 = {4, &n14};
    Node n12 = {12, &n13};
    Node n11 = {9, &n12};
    Node n10 = {6, &n11};
    h1 = sum(&n1, &n7);
    assertEquals(listToString(h1), listToString(&n10), "Different length");
}