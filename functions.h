//functions.h

//In this header file, declare any helper functions you created

//Be sure to #include "functions.h" anywhere you need to use these functinos

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "linkedList.h"

/** 
 * Recursively check if an input string is a palindrome or not
 * Ignore capitalization and spaces
 * 
 * E.g. "ABa" is a palindrome but "ABC" is not
 * 
 * Input: string s
 * Output: Return true if palindrome, false if not
 * 
*/
bool isPalindrome(string s);

/**
 * Recursively determine if a linked list is acylic or not
 * 
 * A linked list is acylic if there does not exist a cycle - 
 * the next pointer of any node does not point a previous node
 * 
 * Input: head of a linked list
 * Output: True if acylic, false if not
*/
bool isAcylic(Node* head);

/**
 * Recursively reverse a linked list (change the pointers of the nodes itself)
 * Modifying the values within the linked list will not work
 * 
 * E.g. 1 -> 2 -> 3 becomes 3 -> 2 -> 1
 * 
 * Input: head of a linked list
 * Output: Pointer to head of new linked list
*/
Node* reverse(Node* head);


#endif