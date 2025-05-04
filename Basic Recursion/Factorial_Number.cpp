//Factorial of a Given Number
/*Given an integer n, return the factorial of n.
Factorial of a non-negative integer, is the multiplication of all integers smaller than or equal to n (use 64-bits to return answer).

Examples:
Input : n = 3
Output : 6
Explanation : Factorial = 1 * 2 * 3 => 6

Input : n = 5
Output : 120
Explanation : Factorial = 1 * 2 * 3 * 4 * 5 => 120

Input : n = 4
Output: 24
Constraints:
0 <= n <= 15  */

#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        long long int factorial(int n) {
            int fact = 1;
            if (n < 0) {
// Factorial is not defined for negative numbers
                return -1; 
            }
            if (n == 0 || n == 1) {
                return 1;
            }
            return n * factorial(n - 1);
        }
};