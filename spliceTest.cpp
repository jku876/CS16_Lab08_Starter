#include "linkedListFuncs.h"
#include "tddFuncs.h"
#include <iostream>
using namespace std;

int main() {
    startTestGroup("RETURNS_SPLICED_LINKED_LIST");
    Node e2 = {2, NULL};
    Node e1 = {1, &e2};

    Node e4 = {4, NULL};
    Node e3 = {3, &e4};

    Node *n1[] = {&e1, &e3, &e2, &e4}; 
    Node *h = splice(&e1, &e3);
    assertEquals(n1, 4, h, "Equal length");
}