//KMP Algorithm or LPS array
/* Given two strings, one is a text string, text, and the other is a pattern string, pattern. Find and print the indices of all the occurrences of the pattern string within the text string. Use 0-based indexing for the indices, and ensure that the indices are in ascending order. If the pattern does not occur in the text, return an empty list.
   Implement this solution using the Knuth-Morris-Pratt (KMP) algorithm for efficient pattern matching.
*/

class Solution {
public:
    vector<int> search(string pattern, string text) {
        vector<int> ans;

        int n = text.size();
        int m = pattern.size();

        if (m > n) return ans;

        // Build LPS array
        vector<int> lps(m, 0);

        int len = 0;
        for (int i = 1; i < m; ) {
            if (pattern[i] == pattern[len]) {
                lps[i++] = ++len;
            } else {
                if (len != 0)
                    len = lps[len - 1];
                else
                    lps[i++] = 0;
            }
        }

        // KMP Search
        int i = 0, j = 0;

        while (i < n) {
            if (text[i] == pattern[j]) {
                i++;
                j++;
            }

            if (j == m) {
                ans.push_back(i - j);   // Use i-j+1 if the platform expects 1-based indexing
                j = lps[j - 1];
            }
            else if (i < n && text[i] != pattern[j]) {
                if (j != 0)
                    j = lps[j - 1];
                else
                    i++;
            }
        }

        return ans;
    }
};