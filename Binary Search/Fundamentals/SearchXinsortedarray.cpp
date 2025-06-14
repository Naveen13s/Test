//SearchXinsortedarray.cpp
/*Given a sorted array of integers nums with 0-based indexing, find the index of a specified target integer. If the target is found in the array, return its index. If the target is not found, return -1.
Examples:
Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4
Explanation: The target integer 9 exists in nums and its index is 4

Input: nums = [-1,0,3,5,9,12], target = 2
Output: -1
Explanation: The target integer 2 does not exist in nums so return -1

Input: nums = [-1,0,3,5,9,12], target = -1
Output: 0
Constraints:
  1 <= nums.length <= 105
  -105 < nums[i], target < 105
  nums is sorted in ascending order.  */

#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    int search(const std::vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;

    // Binary search loop
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid; // Found the target
        } else if (nums[mid] < target) {
            left = mid + 1; // Search right half
        } else {
            right = mid - 1; // Search left half
        }
    }

    return -1; // Target not found
}};