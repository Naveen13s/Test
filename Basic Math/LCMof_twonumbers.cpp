//LCM of two numbers
/*You are given two integers n1 and n2. You need find the Lowest Common Multiple (LCM) of the two given numbers. Return the LCM of the two numbers.
The Lowest Common Multiple (LCM) of two integers is the lowest positive integer that is divisible by both the integers.

Examples:
Input: n1 = 4, n2 = 6
Output: 12
Explanation: 4 * 3 = 12, 6 * 2 = 12.
12 is the lowest integer that is divisible both 4 and 6.

Input: n1 = 3, n2 = 5
Output: 15
Explanation: 3 * 5 = 15, 5 * 3 = 15.
15 is the lowest integer that is divisible both 3 and 5.

Input: n1 = 4, n2 = 12
Output:1
Constraints: 1 <= n1, n2 <= 1000  */

#include <iostream>
using namespace std;
class Solution {
public:
    int LCM(int n1, int n2) {
        return (n1 / gcd(n1, n2)) * n2;
    }

    int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }
};