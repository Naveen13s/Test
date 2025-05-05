//Reverse a String I
/*Given an input string as an array of characters, write a function that reverses the string.

Examples:
Input : s = ["h", "e", "l", "l", "o"]
Output : ["o", "l", "l", "e", "h"]
Explanation : The given string is s = "hello" and after reversing it becomes s = "olleh".

Input : s = ["b", "y", "e" ]
Output : ["e", "y", "b"]
Explanation : The given string is s = "bye" and after reversing it becomes s = "eyb".

Input : s = ["h", "a", "n", "n", "a", "h"]
Output: ["h", "a", "n", "n", "a", "h"]
Constraints: 1 <= s.length <= 103
s consist of only lowercase and uppercase English characters.  */

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void reverse(int l, int r, vector<char>& s) {
        if (l >= r) return;
        swap(s[l], s[r]);
        reverse(l + 1, r - 1, s);
    }

    vector<char> reverseString(vector<char>& s) {
        int l = 0;
        int r = s.size() - 1;
        reverse(l, r, s);
        return s;
    }
};
