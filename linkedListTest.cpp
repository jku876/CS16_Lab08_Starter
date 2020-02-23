#include "linkedListFuncs.h"
#include "tddFuncs.h"

using namespace std;

int main() {
    //Tests the splice function
	startTestGroup("RETURNS_SPLICED_LINKED_LIST");
	Node e3 = {3, NULL};
    Node e2 = {2, &e3};
    Node e1 = {1, &e2};

    Node e6 = {3, NULL};
    Node e5 = {2, &e6};
    Node e4 = {1, &e5};

    vector<Node*> v{&e1, &e4, &e2, &e5, &e3, &e6}; 
    Node* h = splice(&e1, &e4);
    int i = 0;
    while(h){
        h = h->next;
        i++;
    }
    

}