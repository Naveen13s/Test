//Longest Common Prefix
/* Write a function to find the longest common prefix string amongst an array of strings.
   If there is no common prefix, return an empty string "".
*/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string lp = strs[0]; 

        for (int i = 1; i < strs.size(); i++) {
            int j = 0; 
            while (j < lp.size() && j < strs[i].size()) {
                if (lp[j] != strs[i][j]) {
                    break;
                }
                j++;
            }
            lp.erase(j, string::npos);
            if (lp == "") {
                return lp;
            }
        }

        return lp;
    }
};