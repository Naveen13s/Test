/*Given an integer array nums, return the sum of the 1st and last element of the array.

Examples:
Input: nums = [2, 3, 4, 5, 6]
Output: 8

Explanation: 1st element = 2, last element = 6, sum = 2 + 6 = 8.
Input: nums = [2]
Output: 4

Explanation: 1st element = last element = 2, sum = 2 + 2 = 4.
Input: nums = [-1, 2, 4, 1]
Output:0      */

#include <iostream>
using namespace std;


class Solution {
public:
    int sumOfFirstAndLast(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        int first = nums[0];
        int last  = nums[nums.size() - 1];
        return first + last;


    }
};