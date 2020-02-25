# CS16 Lab08

All of these functions **must** be implemented recursively 

Functions (TODO)

- **Recursively check if a string is a palindrome**
  - A palindrome is a word or phrase that reads the same backwards & forwards 
  - Palindromes **are not** case-sensitive - disregard spaces as well
  - Examples
    - *Noel sees Leon* reads *noeL sees leoN* backwards, and as we disregard spaces and capitalization, it is a palindrome
    - *HelloN* reads *olleH* and is not a palindrome
  
- **Recursively delete k nodes from a linked list**
  - Given the head of a linked list, delete the first k nodes from the linked list
    - k will always be less than the length of the linked list

- **Recursively find the sum of two linked lists**
  - Given two head nodes, return the head of a new linked-list where each element is the sum of the corresponding element of the other two
    - if one linked-list is shorter, fill the rest of the result with elements from the other (i.e., treat the non-existent nodes as a value of zero)
    -Examples
      - Linked List 1: 1 &rarr; 2 &rarr; 3 &rarr; 4 &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; Linked List 2: 5 &rarr; 6 &rarr; 7 
        - Output: 6 &rarr; 8 &rarr; 10 &rarr; 4 

- **Recursively find the kth Node of a linked list**
  - Given a head node and integer k, return the address of the kth node
    -You do not know whether the linked-list contains k or more nodes; if k is greater than the length of the linked-list, return NULL
    - Example: 
      - list:  &rarr; 2 &rarr; 3 &rarr; 4 &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;
        - findKthNode(list, 1) = 2
        - findKthNode(list, 3) = 4
        - findKthNode(list, 4) = NULL


- **BONUS: Recursively merge two linked lists**
  - This is a bonus problem; doing it is optional
  - Given two linked lists, splice the two linked lists together
    - Splice two linked lists by interweaving the nodes - the second linked list's nodes should be inserted at alternating positions into the first linked list
    - If the size of the two linked lists differ, after successfully splicing, finish the combined linked list with the remaining elements of the larger linked list
   - Examples
      - Linked List 1: 1 &rarr; 2 &rarr; 3 &rarr; 4 &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; Linked List 2: 5 &rarr; 6 &rarr; 7 &rarr; 8 
        - Output: 1 &rarr; 5 &rarr; 2 &rarr; 6 &rarr; 3 &rarr; 7 &rarr; 4 &rarr; 8

      - Linked List 1: 1 &rarr; 2 &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; Linked List 2: 3 &rarr; 4 &rarr; 5 &rarr; 6
        - Output: 1 &rarr; 3 &rarr; 2 &rarr; 4 &rarr; 5 &rarr; 6 
