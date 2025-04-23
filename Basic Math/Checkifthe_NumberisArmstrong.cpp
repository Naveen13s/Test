//Check if the Number is Armstrong
/*You are given an integer n. You need to check whether it is an armstrong number or not. Return true if it is an armstrong number, otherwise return false.
An armstrong number is a number which is equal to the sum of the digits of the number, raised to the power of the number of digits.

Examples:
Input: n = 153
Output: true
Explanation: Number of digits : 3.
1 ^ 3 + 5 ^ 3 + 3 ^ 3 = 1 + 125 + 27 = 153.
Therefore, it is an Armstrong number.

Input: n = 12
Output: false
Explanation: Number of digits : 2.
1 ^ 2 + 2 ^ 2 = 1 + 4 = 5.
Therefore, it is not an Armstrong number.  */

#include <iostream>
using namespace std;
class Solution {
 public:
  bool isArmstrong(int n) {
   int temp, arm = 0;
   temp = n;
   int count = 0;
   int temp2 = n;
   while (temp2 != 0) {
    count++;
    temp2 = temp2 / 10;
   }
   while (n != 0) {
    int ld = n % 10;
    arm = arm + pow(ld, count);
    n = n / 10;
   }
   if (arm == temp) {
    return true;
   }
   else {
    return false;
   }
  }
};