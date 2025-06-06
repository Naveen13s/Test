//Largest Odd Number in a String
/*Given a string s, representing a large integer, the task is to return the largest-valued odd integer (as a string) that is a substring of the given string s.
The number returned should not have leading zero's. But the given input string may have leading zero.

Examples:
Input : s = "5347"
Output : "5347"
Explanation : The odd numbers formed by given strings are --> 5, 3, 53, 347, 5347.
So the largest among all the possible odd numbers for given string is 5347.  

Input : s = "0214638"
Output : "21463"
Explanation : The different odd numbers that can be formed by the given string are --> 1, 3, 21, 63, 463, 1463, 21463.
We cannot include 021463 as the number contains leading zero.
So largest odd number in given string is 21463.

Input : s = "0032579"
Output: "32579"
Constraints: 1 <= s.length <= 103
'0' <= s[i] <= '9'
*/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string largeOddNum(string& s) {
        int n = s.length();
        int odd_digit_index = -1;

        for (int i = n - 1; i >= 0; i--) {
            if ((s[i] - '0') % 2 == 1) {
                odd_digit_index = i;
                break;
            }
        }

        int non_zero_index = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] != '0') {
                non_zero_index = i;
                break;
            }
        }

        if (odd_digit_index == -1) return "";

        return s.substr(non_zero_index, odd_digit_index - non_zero_index + 1);
    }
};