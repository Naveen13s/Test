//Longest Common Prefix
/*Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".

Examples:
Input : str = ["flowers" , "flow" , "fly", "flight" ]
Output : "fl"
Explanation : All strings given in array contains common prefix "fl".

Input : str = ["dog" , "cat" , "animal", "monkey" ]
Output : ""

Explanation : There is no common prefix among the given strings in array.
Input : str = ["lady" , "lazy"]
Output: la
Constraints: 1 <= str.length <= 200
1 <= str[i].length <= 200
str[i] contains only lowercase English letters.
*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        std::string longestCommonPrefix(std::vector<std::string>& str) {
            // your code goes here
            int n = str.size();
            if (n == 0) return "";
            std::sort(str.begin(), str.end());
            std::string first = str[0];
            std::string last = str[n - 1];
            std::string ans = "";
            for (int i = 0; i < std::min(first.size(), last.size()); i++) {
                if (first[i] != last[i]) break;
                ans += first[i];
            }
            return ans;
        }
};


