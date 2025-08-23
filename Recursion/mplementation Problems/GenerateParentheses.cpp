//Generate Parentheses
/*
Given an integer n.Generate all possible combinations of well-formed parentheses of length 2 x N.
Examples:
Input : n = 3
Output : [ "((()))" , "(()())" , "(())()" , "()(())" , "()()()" ]
Input : 2
Output : [ "(())" , "()()" ]
Input : 1
Output:()
Constraints:
•	1 <= n <= 8

*/

#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp;
        generateParenthesisRec(ans, temp, 0, 0, 0, n);
        return ans;
    }

    void generateParenthesisRec(vector<string> &ans, string &temp, int idx,int op, int cl, int n) {
        if (idx == 2 * n and op == n and cl == n) {
            ans.push_back(temp);
            return;
        }

        if (op > n) {
            return;
        }

        if (cl > op) {
            return;
        }
        generateParenthesisRec(ans, temp += '(', idx + 1, op + 1, cl, n);
        temp.pop_back();
        generateParenthesisRec(ans, temp += ')', idx + 1, op, cl + 1, n);
        temp.pop_back();
    }
};