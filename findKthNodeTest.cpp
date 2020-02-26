#include "linkedListFuncs.h"
#include "tddFuncs.h"
#include <iostream>
using namespace std;

int main() {
    startTestGroup("FIND_KTH_NODE");
    Node e6 = {1, NULL};
    Node e5 = {2, &e6};
    Node e4 = {3, &e5};


    assertEquals(findKthNode(&e4,1), &e4, "1st node of 1->2->3");
    assertEquals(findKthNode(&e4, 3), &e6, "3rd node of 1->2->3");
    assertEquals(findKthNode(&e4, 4), NULL, "k > linked list length");
    assertEquals(findKthNode(NULL, 100), NULL, "null linked list");
}