//Check for Perfect Number
/*You are given an integer n. You need to check if the number is a perfect number or not. Return true if it is a perfect number, otherwise, return false.
A perfect number is a number whose proper divisors add up to the number itself.

Examples:
Input: n = 6
Output: true
Explanation: Proper divisors of 6 are 1, 2, 3.
1 + 2 + 3 = 6.

Input: n = 4
Output: false
Explanation: Proper divisors of 4 are 1, 2.
1 + 2 = 3.  */

#include <iostream>
using namespace std;
class Solution {
public:
    bool isPerfect(int n) {
        if (n < 2) return false;
        int sum = 1;

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                sum += i;
                if (i != n / i) sum += (n / i);
            }
        }
        return sum == n;
    }
};

