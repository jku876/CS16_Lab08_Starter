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

- **Recursively implement a unique Two Sum**
  - Given a linked list of integers and a target value, find the pair whose values sum to the target value, and return the later of the two Nodes (closer to the end)
    - If more than one pair sum to the target value, find the last possible Node (closest to the end) which can satisfy this condition
    - If no such pair exists in the linked list, find the pair of Nodes whose sum is the closest to the target value, and return the later of the two Nodes
    - The linked list will have **at least two** elements
  - Examples
    - *Linked List* = *1 -> 2 -> 3 -> 4 -> 5*, *target* = *6* &rarr; return *Node 5* 
    - *Linked List* = *1 -> 2 -> 3*, *target* = *0*  &rarr; return *Node 2* 
      - *1 + 2 = 3*, and as that is the closest sum to *target*, return the later of the two Nodes
