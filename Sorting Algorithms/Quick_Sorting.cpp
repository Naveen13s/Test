//Quick Sorting
/*Given an array of integers called nums, sort the array in non-decreasing order using the quick sort algorithm and return the sorted array.
A sorted array in non-decreasing order is an array where each element is greater than or equal to all preceding elements in the array.

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
Constraints: 1 <= nums.length <= 105
-104 <= nums[i] <= 104
nums[i] may contain duplicate values. */


#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int partition(std::vector<int>& nums, int low, int high) {
            int pivot = nums[high];
            int i = low - 1;
            for (int j = low; j < high; j++) {
                if (nums[j] <= pivot) {
                    i++;
                    std::swap(nums[i], nums[j]);
                }
            }
            std::swap(nums[i + 1], nums[high]);
            return i + 1;
        }
    
        void quickSortUtil(std::vector<int>& nums, int low, int high) {
            if (low < high) {
                int pi = partition(nums, low, high);
                quickSortUtil(nums, low, pi - 1);
                quickSortUtil(nums, pi + 1, high);
            }
        }
    
        std::vector<int> quickSort(std::vector<int>& nums) {
            quickSortUtil(nums, 0, nums.size() - 1);
            return nums;
        }
    };