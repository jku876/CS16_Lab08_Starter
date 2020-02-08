# CS16 Lab08

All of these functions **must** be implemented recursively 

Functions (TODO)

- **Recursively check if a string is a palindrome**
  - A palindrome is a word or phrase that reads the same backwards & forwards 
  - Palindromes **are not** case-sensitive - disregard spaces as well
  - Examples
    - *Noel sees Leon* reads *noeL sees leoN* backwards, and as we disregard spaces and capitalization, it is a palindrome
    - *Hello* reads *olleH* and is not a palindrome
  
- **Recursively determine if a linked list is acyclic**
  - A linked list is **acylic** if there does not exist a loop (that is, the next pointer of any node does not point to a previous node)
  - If no such cycle exists, return **true** - otherwise, return **false**
  
- **Recursively reverse a linked list**
  - Given the head of a linked list, reverse the order of the nodes
    - As clarification, this means the actual pointers of the nodes itself - simply modifying the values in the nodes **will not** work
  - E.g. *1 -> 2 -> 3 -> 4* becomes *4 -> 3 -> 2 -> 1* 
  - Return the head of the new linked list

- **Recursively implement a binary search**
  - Given a sorted array in ascending order (where each element is unique), search for a target value and return its index
    - The target value **is guaranteed** to exist in the array 
  - E.g. *arr* = *{1, 3, 5, 7, 10}*, *target* = *5* &rarr; return 2
