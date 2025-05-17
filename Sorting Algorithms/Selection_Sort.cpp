//Selection Sort
/*Given an array of integers nums, sort the array in non-decreasing order using the selection sort algorithm and return the sorted array.
A sorted array in non-decreasing order is an array where each element is greater than or equal to all previous elements in the array.

Examples:
Input: nums = [7, 4, 1, 5, 3]
Output: [1, 3, 4, 5, 7]
Explanation: 1 <= 3 <= 4 <= 5 <= 7.
Thus the array is sorted in non-decreasing order.

Input: nums = [5, 4, 4, 1, 1]
Output: [1, 1, 4, 4, 5]
Explanation: 1 <= 1 <= 4 <= 4 <= 5.
Thus the array is sorted in non-decreasing order.

Input: nums = [3, 2, 3, 4, 5]
Output: [2, 3, 3, 4, 5]
Constraints: 1 <= nums.length <= 1000
-104 <= nums[i] <= 104
nums[i] may contain duplicate values.  */

#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<int> selectionSort(vector<int>& nums) {
            int n = nums.size();
            if (n == 0) return nums; 
            for (int i = 0; i < n - 1; i++) {
                int minIndex = i;
                for (int j = i + 1; j < n; j++) {
                    if (nums[j] < nums[minIndex])
                        minIndex = j;
                }
                swap(nums[minIndex], nums[i]);
            }
            return nums;
        }
    };