//Palindrome Number

/*You are given an integer n. You need to check whether the number is a palindrome number or not. Return true if it's a palindrome number, otherwise return false.
A palindrome number is a number which reads the same both left to right and right to left.

Examples:
Input: n = 121
output: true
Explanation: When read from left to right : 121.
When read from right to left : 121.

Input: n = 123
Output: false
Explanation: When read from left to right : 123.
When read from right to left : 321.

Input: 101
Output: true  */

#include <iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int n) {
        // Convert number to string
        std::string str = std::to_string(n);
        int left = 0;
        int right = str.length() - 1;

        // Check for palindrome
        while (left < right) {
            if (str[left] != str[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
