#include "strFuncs.h"
#include "tddFuncs.h"
using namespace std;

int main() {
<<<<<<< HEAD
//Tests the isAnagram function
	startTestGroup("CHECK_IF_A_STRING_IS_A_PALINDROME");
	
	string s1 = "leonseesnoel";
	string s2 = "R    do ?F";
	string s3 = "Banana";
	string s4 = "Apple";
	assertTrue(isAnagram(s1,s2), "isAnagram(s1,s2)");
	assertTrue(!isAnagram(s3,s4), "isAnagram(s3,s4)");
=======
    //Tests the isPalindrome function
	startTestGroup("CHECK_IF_A_STRING_IS_A_PALINDROME");
	string p1 = "leonseesnoel";
	string p2 = "RaCecAr";
	string p3 = "fail";
	
	assertTrue(isPalindrome(p1), "isPalindrome(p1)");
	assertTrue(isPalindrome(p2), "isPalindrome(p2)");
    assertTrue(!isPalindrome(p3), "isPalindrome(p3)");

>>>>>>> ea5a4b3ceeca2e15bd854ceeeab195175e6d2152
}