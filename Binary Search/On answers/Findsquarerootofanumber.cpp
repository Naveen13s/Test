//Find square root of a number
/*Given a positive integer n. Find and return its square root. If n is not a perfect square, then return the floor value of sqrt(n).

Examples:
Input: n = 36
Output: 6
Explanation: 6 is the square root of 36.

Input: n = 28
Output: 5
Explanation: The square root of 28 is approximately 5.292. So, the floor value will be 5.

Input: n=50
Output: 7
Constraints:
 0 <= n <= 231 - 1  */

 #include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long floorSqrt(long long n) {
        long long ans = 0;
        for (long long i = 1; i <= n; i++) {
            long long val = i * i;
            if (val <= n * 1ll) {
                ans = i; 
            } else {
                break; 
            }
        }
        return ans;
    }
};
