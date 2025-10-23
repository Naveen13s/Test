//Divide two numbers without multiplication and division
/*Given the two integers, dividend and divisor. Divide without using the mod, division, or multiplication operators and return the quotient.
The fractional portion of the integer division should be lost as it truncates toward zero.
As an illustration, 8.345 and -2.7335 would be reduced to 8 and -2 respectively.
Note: Assume we are dealing with an environment that could only store integers within the 32-bit signed integer range: [−231, 231 − 1]. For this problem, if the quotient is strictly greater than 231 - 1, then return 231 - 1, and if the quotient is strictly less than -231, then return -231.
Examples:
Input : Dividend = 10 , Divisor = 3
Output : 3
Explanation : 10/3 = 3.33 , truncated to 3.
Input : Dividend = 7 , Divisor = -3
Output : -2
Explanation : 7/-3 = -2.33 , truncated to -2.
Input : Dividend = 7 , Divisor = 2
Output:3
Constraints:
•	-231 <= dividend , divisor <= 231 - 1
•	divisor != 0

*/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == divisor) return 1;
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;
        if (divisor == 1) return dividend;
        bool isPositive = !((dividend >= 0 && divisor < 0) || (dividend < 0 && divisor > 0));
        long long n = abs((long long) dividend);
        long long d = abs((long long) divisor);
        long long ans = 0, sum = 0;
        while (n >= d) {
            long long temp = d, multiple = 1;
            while (n >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }
            n -= temp;
            ans += multiple;
        }
        if (ans > INT_MAX)
            return isPositive ? INT_MAX : INT_MIN;
        return isPositive ? ans : -ans;
    }
};