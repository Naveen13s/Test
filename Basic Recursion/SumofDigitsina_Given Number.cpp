//Sum of Digits in a Given Number
/*Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

Examples:
Input : num = 529
Output : 7
Explanation : In first iteration the digits sum will be = 5 + 2 + 9 => 16
In second iteration the digits sum will be 1 + 6 => 7.
Now single digit is remaining , so we return it.

Input : num = 101
Output : 2
Explanation : In first iteration the digits sum will be = 1 + 0 + 1 => 2
Now single digit is remaining , so we return it. */

#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int addDigits(int num) {
            if (num == 0) return 0;
            int ans = addDigits(num / 10) + num % 10;
            return ans % 10 + addDigits(ans / 10);
        }
};

