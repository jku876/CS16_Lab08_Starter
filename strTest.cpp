#include "strFuncs.h"

int main() {
//Tests the isAnagram function
	startTestGroup("CHECK_IF_A_STRING_IS_A_PALINDROME");
	
	string s1 = "leonseesnoel";
	string s2 = "R    do ?F";
	string s3 = "Banana";
	string s4 = "Apple";
	assertTrue(isAnagram(s1,s2), "isAnagram(s1,s2)");
	assertTrue(!isAnagram(s3,s4), "isAnagram(s3,s4)");
}