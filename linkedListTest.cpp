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
    assertEquals(v1, h, "splice(&e1, &e3)");

    Node e6 = {6, NULL};
    Node e5 = {5, &e6};

    vector<Node*> v2{&e5, &e6};
    h = splice(NULL, &e5);
    assertEquals(v2, h, "splice(NULL, &e5)");

    vector<Node*> v3{&e1, &e5, &e3, &e6, &e2, &e4};
    h = splice(&e1, &e5);
    assertEquals(v3, h, "splice(&e1, &e5)");

    startTestGroup("REMOVE_K_NODES_FROM_THE_FRONT_OF_THE_LIST");
    
}