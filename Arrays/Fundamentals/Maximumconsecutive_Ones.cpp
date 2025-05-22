//Maximum Consecutive Ones
/*Given a binary array nums, return the maximum number of consecutive 1s in the array.
A binary array is an array that contains only 0s and 1s.

Examples:
Input: nums = [1, 1, 0, 0, 1, 1, 1, 0]
Output: 3
Explanation: The maximum consecutive 1s are present from index 4 to index 6, amounting to 3 1s

Input: nums = [0, 0, 0, 0, 0, 0, 0, 0]
Output: 0
Explanation: No 1s are present in nums, thus we return 0

Input: nums = [1, 0, 1, 1, 1, 0, 1, 1, 1]
Output: 3
Constraints: 1 <= nums.length <= 105
nums[i] is either 0 or 1.  */

#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int findMaxConsecutiveOnes(vector<int>& nums) {
            int count = 0;
            int maxCount = 0;
            int n = nums.size();
            for (int i = 0; i < n; i++) {
                if (nums[i] == 1) {
                    count++;
                } else {
                    maxCount = max(count, maxCount);
                    count = 0;
                }
            }
            // After the loop, check once more in case the array ends with 1s
            maxCount = max(count, maxCount);
            return maxCount;
        }
};
