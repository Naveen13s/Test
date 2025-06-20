//Search in rotated sorted array-II
/*Given an integer array nums, sorted in ascending order (may contain duplicate values) and a target value k. Now the array is rotated at some pivot point unknown to you. Return True if k is present and otherwise, return False.

Examples:
Input : nums = [7, 8, 1, 2, 3, 3, 3, 4, 5, 6], k = 3
Output: True
Explanation: The element 3 is present in the array. So, the answer is True.

Input : nums = [7, 8, 1, 2, 3, 3, 3, 4, 5, 6], k = 10
Output: False
Explanation:The element 10 is not present in the array. So, the answer is False.

Input : nums = [7, 8, 1, 2, 3, 3, 3, 4, 5, 6], k = 7
Output: True
Constraints:
  1 <= nums.length <= 104
  -104 <= nums[i] <= 104
  nums is guaranteed to be rotated at some pivot.
  -104 <= k <= 104    */

  #include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool searchInARotatedSortedArrayII(vector<int> &nums, int k)  {
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == k) {
                return true;
            }
        }
        return false;
      
    }
};