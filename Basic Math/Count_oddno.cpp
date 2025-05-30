// Count number of odd digits in a number.
/*You are given an integer n. You need to return the number of odd digits present in the number.
The number will have no leading zeroes, except when the number is 0 itself.

Examples:
Input: n = 5
Output: 1
Explanation: 5 is an odd digit.

Input: n = 25
Output: 1
Explanation: The only odd digit in 25 is 5.   */

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countOddDigit(int n) {
        int oddDigits = 0;
        while (n > 0) {
            int lastDigit = n % 10;
            if (lastDigit % 2 != 0) {
                oddDigits = oddDigits + 1;
            }
            n = n / 10;
        }

        return oddDigits;
    }
};

