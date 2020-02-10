# CS16 Lab08

All of these functions **must** be implemented recursively 

Functions (TODO)

- **Recursively merge two linked lists**
  - Given two linked lists, splice the two linked lists together
    - Splice two linked lists by interweaving the nodes - the second linked list's nodes should be inserted at alternating positions into the first linked list
    - If the size of the two linked lists differ, after successfully splicing, finish the combined linked list with the remaining elements of the larger linked list
   - Examples
      - Linked List 1: 1 &rarr; 2 &rarr; 3 &rarr; 4 &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; Linked List 2: 5 &rarr; 6 &rarr; 7 &rarr; 8 
        - Output: 1 &rarr; 5 &rarr; 2 &rarr; 6 &rarr; 3 &rarr; 7 &rarr; 4 &rarr; 8

      - Linked List 1: 1 &rarr; 2 &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; Linked List 2: 3 &rarr; 4 &rarr; 5 &rarr; 6
        - Output: 1 &rarr; 3 &rarr; 2 &rarr; 4 &rarr; 5 &rarr; 6 
    
    
- **Recursively find the middle of the linked list**
  - Find the middle node of a linked list, and return that node
  - It is guaranteed that the linked list will contain an odd number of nodes
  
- **Recursively remove a target value from a linked list**
  - Given a linked list and a value to delete, delete all nodes with that value from the linked list
    - It is **not** guaranteed that the value exists in the linked list - thus, you may not need to remove anything at all
  - Return the head of the new linked list

- **Recursively delete k nodes from a linked list**
  - Given the head of a linked list, delete the first k nodes from the linked list
    - k will always be less than the length of the linked list
