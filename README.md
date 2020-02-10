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
    - The linked list will have **at least two** elements.
    - Assume that there will always exist exactly one pair of nodes that sum to the target value.
    - The pair of nodes which sum to the target value will always be distinct.
    
