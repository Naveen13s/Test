/*Given a string s. Return the last character of the given string s.

Examples:
Input : s = "takeuforward"
Output : d

Explanation : The last character of given string is "d".
Input : s = "goodforyou"
Output : u

Explanation : The last character of given string is "u".
Input : s = "lovecoding"
Output:g

Constraints:
1 <= s.length <= 100
s consist of only lowercase English letters  */

#include <iostream>
using namespace std;
class Solution{
    public:
        char lastChar(string& s){
            return s[s.size() - 1];
        }
};