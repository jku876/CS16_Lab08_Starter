#include "strFuncs.h"
using namespace std;
#include <cctype>


/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *You should provide a recursive solution*/
bool isPalindrome(const string s1){
    if(s1.length() <= 1){
        return true;
    }
    if(tolower(s1[0]) != tolower(s1[s1.length()-1])){
        return false;
    }
    return isPalindrome(s1.substr(1,s1.length()-2));
}
