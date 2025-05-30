//Isomorphic String
/*Given two strings s and t, determine if they are isomorphic. Two strings s and t are isomorphic if the characters in s can be replaced to get t.
All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

Examples:
Input : s = "egg" , t = "add"
Output : true
Explanation : The 'e' in string s can be replaced with 'a' of string t.
The 'g' in string s can be replaced with 'd' of t.
Hence all characters in s can be replaced to get t.

Input : s = "apple" , t = "bbnbm"
Output : false
Explanation : It can be proved that no solution exists for this example.
All the "b"s in t have to take places of "a", "p", "l", which requires "p" to be mapped to "b", but that makes it impossible for "p" at index 2 (0-indexed) to become "n". Thus no solution exists.

Input : s = "paper" , t = "title"
Output:true
Constraints:1 <= s.length <= 103
s.length == t.length
s and t consist of only lowercase English letters.*/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isomorphicString(string s, string t) {
        if (s.length() != t.length()) return false;
        vector<int> char1(256, 0); 
        vector<int> char2(256, 0);
        int n = s.length();

        for (int i = 0; i < n; i++)
        {
            if (char1[s[i]] == 0 && char2[t[i]] == 0)
            {
                char1[s[i]] = t[i] + 1;
                char2[t[i]] = s[i] + 1;
            }
            else if (char1[s[i]] != t[i] + 1 || char2[t[i]] != s[i] + 1)
            {
                return false;
            }
        }
        return true;
    }
};
