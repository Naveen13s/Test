//Single element in sorted array
/*Given an array nums sorted in non-decreasing order. Every number in the array except one appears twice. Find the single number in the array.

Examples:
Input :nums = [1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6]
Output:4
Explanation: Only the number 4 appears once in the array.

Input : nums = [1, 1, 3, 5, 5]
Output:3
Explanation: Only the number 3 appears once in the array.

Input :nums = [1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7]
Output: 7
Constraints:
  n == nums.length
  1 <= n <= 104
  -104 <= nums[i] <= 104  */

#include <bits/stdc++.h>  
using namespace std;
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;
        
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (mid % 2 == 1) mid--;


            if (nums[mid] == nums[mid + 1]) {
                low = mid + 2;
            } else {
                high = mid;
            }
        }
        
        return nums[low];
    }
};

