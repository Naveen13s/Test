//Factorial of a given number
/*You are given an integer n. Return the value of n! or n factorial.
Factorial of a number is the product of all positive integers less than or equal to that number.
Examples:
Input: n = 2
Output: 2
Explanation: 2! = 1 * 2 = 2.

Input: n = 0
Output: 1
Explanation: 0! is defined as 1. */

#include <iostream>
using namespace std;
class Solution {
public:
    int factorial(int n) {
        int result = 1;
        for(int i = 1; i <= n; i++) {
            result *= i;
        }
        return result;
    }
};