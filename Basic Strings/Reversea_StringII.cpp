//Reverse a String II
/*Given a string, the task is to reverse it. The string is represented by an array of characters s. Perform the reversal in place with O(1) extra memory.
Note: no need to return anything, modify the given list.

Examples:
Input : s = ["h", "e" ,"l" ,"l" ,"o"]
Output : ["o", "l", "l", "e", "h"]
Explanation : The given string is s = "hello" and after reversing it becomes s = "olleh".

Input : s = ["b", "y" ,"e" ]
Output : ["e", "y", "b"]
Explanation : The given string is s = "bye" and after reversing it becomes s = "eyb".

Input : s = ["h", "a" ,"n" ,"n" ,"a", "h"]
Output: ["h", "a" ,"n" ,"n" ,"a", "h"]
Constraints: 1 <= s.length <= 105
s consist of only lowercase and uppercase English characters.  */

#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    std::vector<char> reverseString(std::vector<char>& s) {
        int i = 0; // Initialize pointer i to the start of the string
        int j = s.size() - 1; // Initialize pointer j to the end of the string

        while (i < j) {
            // Swap the characters at i and j
            std::swap(s[i], s[j]);
            i++; // Move i towards the center
            j--; // Move j towards the center
        }
        return s;
    }
};