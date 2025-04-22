//Return the Largest Digit in a Number
/*You are given an integer n. Return the largest digit present in the number.

Examples:
Input: n = 25
Output: 5
Explanation: The largest digit in 25 is 5.

Input: n = 99
Output: 9
Explanation: The largest digit in 99 is 9.

Input: n = 1
Output: 3
Constraints:
0 <= n <= 5000
n will contain no leading zeroes except when it is 0 itself.   */

#include <iostream>
using namespace std;
class Solution {
public:
    int largestDigit(int n) {
        n = abs(n); // Take absolute value
        if (n == 0) return 0; // Return for zero case
        int ans = INT_MIN;
        while (n != 0) {
            int d = n % 10;
            if (d > ans) {
                ans = d;
            }
            n = n / 10;
        }
        return ans;
    }
};

