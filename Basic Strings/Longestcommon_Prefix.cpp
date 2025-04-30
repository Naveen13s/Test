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
    string longestCommonPrefix(vector<string>& str) {
        if (str.empty()) return "";
        string common_sub = str[0];
        for (int i = 1; i < str.size(); i++) {
            int len = min(common_sub.length(), str[i].length());
            for (int j = 0; j < len; j++) {
                if (common_sub[j] != str[i][j]) {
                    common_sub = common_sub.substr(0, j);
                    break;
                }
            }
            // If there's no common prefix, return empty string
            if (common_sub.empty()) return "";
        }
        return common_sub;
    }
};


