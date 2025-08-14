//Pow(x,n)
/*
Implement the power function pow(x, n) , which calculates the x raised to n i.e. xn.
Examples:
Input : x = 2.0000 , n = 10
Output : 1024.0000
Explanation : Answer = 2^10 => 1024.
Input : x = 2.0000 , n = -2
Output : 0.2500
Explanation : Answer = 2^(-2) = 1/4 => 0.25.
Input : x = 2.5000 , n = 2
Output:6.25
Constraints:
•	-100.0 <= x <= 100.0
•	-231 <= n <= 231 - 1
•	-104 <= xn <= 104
•	Either x is not zero or n>0.
•	n is an integer.


*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0 || x == 1.0) return 1.0;

        long long exp = n; // use long long to avoid overflow with INT_MIN
        if (exp < 0) {
            x = 1 / x;
            exp = -exp;
        }

        double result = 1.0;
        while (exp > 0) {
            if (exp % 2 == 1) result *= x; // if odd exponent, multiply once
            x *= x;  // square the base
            exp /= 2; // halve the exponent
        }
        return result;
    }
};
