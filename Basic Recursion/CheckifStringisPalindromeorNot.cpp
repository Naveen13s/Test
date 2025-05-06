//Check if String is Palindrome or Not
/*Given a string s, return true if the string is palindrome, otherwise false.
A string is called palindrome if it reads the same forward and backward.

Examples:
Input : s = "hannah"
Output : true
Explanation : The string when reversed is --> "hannah", which is same as original string , so we return true.

Input : s = "aabbaaa"
Output : false
Explanation : The string when reversed is --> "aaabbaa", which is not same as original string, So we return false.

Input : s = "aabbcccdbbaa"
Output: false
Constraints: 1 <= s.length <= 103
s consist of only uppercase and lowercase English characters.
*/


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool palindromeCheck(string& s) {
        return isPalindrome(s, 0, s.length() - 1);
    }

    bool isPalindrome(string &s, int low, int high) {
        if (low >= high) return true;
        if (s[low] != s[high]) {
            return false;
        } else {
        
        }
        low++;
        high--;
        return isPalindrome(s, low, high); 
    }
};
