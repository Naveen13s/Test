//Sum of First N Numbers
/*Given an integer N, return the sum of first N natural numbers. Try to solve this using recursion.
Examples:
Input : N = 4
Output : 10
Explanation : first four natural numbers are 1, 2, 3, 4.
Sum is 1 + 2 + 3 + 4 => 10.

Input : N = 2
Output : 3
Explanation : first two natural numbers are 1, 2.
Sum is 1 + 2 => 3.

Input : N = 10
Output: 55
Constraints:
1 <= N <= 103
*/

#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int NnumbersSum(int N) {
            if (N <= 0) {
                return 0;
            }
            // Recursive case simply
            return N + NnumbersSum(N - 1);
        }
};
