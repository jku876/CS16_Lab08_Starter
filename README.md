# CS16 Lab08

All of these functions **must** be implemented recursively 

Functions (TODO)

- **Recursively check if a string is a palindrome**
  - A palindrome is a word or phrase that reads the same backwards & forwards 
  - Palindromes **are not** case-sensitive - disregard spaces as well
  - Examples
    - *Noel sees Leon* reads *noeL sees leoN* backwards, and as we disregard spaces and capitalization, it is a palindrome
    - *HelloN* reads *olleH* and is not a palindrome

- **Recursively merge two linked lists**
  - Given two linked lists, splice the two linked lists together
    - Splice two linked lists by interweaving the nodes - the second linked list's nodes should be inserted at alternating positions into the first linked list
    - If the size of the two linked lists differ, after successfully splicing, finish the combined linked list with the remaining elements of the larger linked list
   - Examples
      - Linked List 1: 1 &rarr; 2 &rarr; 3 &rarr; 4 &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; Linked List 2: 5 &rarr; 6 &rarr; 7 &rarr; 8 
        - Output: 1 &rarr; 5 &rarr; 2 &rarr; 6 &rarr; 3 &rarr; 7 &rarr; 4 &rarr; 8

      - Linked List 1: 1 &rarr; 2 &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; Linked List 2: 3 &rarr; 4 &rarr; 5 &rarr; 6
        - Output: 1 &rarr; 3 &rarr; 2 &rarr; 4 &rarr; 5 &rarr; 6 
    
    

  
- **Recursively remove a target value from a linked list**
  - Given a linked list and a value to delete, delete all nodes with that value from the linked list
    - It is **not** guaranteed that the value exists in the linked list - thus, you may not need to remove anything at all
  - Return the head of the new linked list


- **Recursively find the sum of two linked lists**
  - Given two head nodes, return the head of a new linked-list where each element is the sum of the corresponding element of the other two
    - if one linked-list is shorter, fill the rest of the result with elements from the other (i.e., treat the non-existent nodes as a value of zero)
    -Examples
      - Linked List 1: 1 &rarr; 2 &rarr; 3 &rarr; 4 &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; Linked List 2: 5 &rarr; 6 &rarr; 7 
        - Output: 6 &rarr; 8 &rarr; 10 &rarr; 4 
-----------------------------------------------------------------------------------------------
- **Recursively sum two linked lists**
  - Given two **non-empty** linked lists representing two non-negative integers, where each integer is stored in **reverse** order and each node represents a single digit, add the two numbers and return it as a linked list.
  - Examples
    - (2 -> 4 -> 3) + (5 -> 6 -> 4) 
      - Output: 7 -> 0 -> 8
      - Explanation: 342 + 465 = 807
    
    - (9 -> 9 -> 5) + (9 -> 5 -> 6)
      - Output: 8 -> 5 -> 2 -> 1
      - Explanation: 659 + 599 = 1258

- **Recursively delete k nodes from a linked list**
  - Given the head of a linked list, delete the first k nodes from the linked list
    - k will always be less than the length of the linked list
    
- **Recursively find the middle of the linked list**
  - Find the middle node of a linked list, and return that node
  - It is guaranteed that the linked list will contain an odd number of nodes
