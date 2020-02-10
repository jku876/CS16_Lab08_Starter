# CS16 Lab08

All of these functions **must** be implemented recursively 

Functions (TODO)

- **Recursively find the distance between two values**
  - Given the head of a linked list and two target values, find the distance between the two target values
    - Define the *distance* between two values to be the number of nodes between the two nodes containing those values
    - It is **guaranteed** that each linked list element is unique, and the two values exist within the linked list
    - However, it is **not guaranteed** that the two target values are distinct
  - Challenge: If each element in the linked list were not unique, return the **minimum** distance between the two target values
  
- **Recursively find the mean of a linked list**
  - Given the head of a **non-empty** linked list, return the mean of the linked list
  - Bonus (challenge): Find the median of the linked list 
  
- **Recursively delete a linked list**
  - Given the head of a linked list, delete all nodes in that linked list

- **Recursively merge 2 sorted linked lists**
  - Given two sorted linked lists in ascending order, merge them into one sorted linked list
  - E.g. Given *1 -> 3 -> 5* and *2 -> 4 -> 6* as inputs, return the linked list *1 -> 2 -> 3 -> 4 -> 5 -> 6*
