//Reverse a number
/* You are given an integer n. Return the integer formed by placing the digits of n in reverse order.

Examples:
Input: n = 25
Output: 52
Explanation: Reverse of 25 is 52.

Input: n = 123
Output: 321
Explanation: Reverse of 123 is 321.

Input: n = 54
Output: 2   */

#include <iostream>
using namespace std;
class Solution {
public:
    int reverseNumber(int n) {
       int count = 0;
       int reversed = 0; 
       int y = n;
       while(y > 0){
        y = y / 10;
        count++;
       }
       while(n > 0){
        int i = n % 10;
        n = n / 10;
        int f = i * pow(10, count - 1); // Use pow instead of ^ for power
        count--;
        reversed = reversed + f;
       } 
       return reversed;
    }
};

