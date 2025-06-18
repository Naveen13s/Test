//First and last occurrence
/*Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value. If the target is not found in the array, return [-1, -1].
Examples:
Input: nums = [5, 7, 7, 8, 8, 10], target = 8
Output: [3, 4]
Explanation:The target is 8, and it appears in the array at indices 3 and 4, so the output is [3,4]

Input: nums = [5, 7, 7, 8, 8, 10], target = 6
Output: [-1, -1]
Expalantion: The target is 6, which is not present in the array. Therefore, the output is [-1, -1].

Input: nums = [5, 7, 7, 8, 8, 10], target = 5
Output: [0, 0]
Constraints:
  0 <= nums.length <= 105
  -109 <= nums[i] <= 109
  nums is a non-decreasing array.
  -109 <= target <= 109    */

  #include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
        int first = -1, last = -1;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                if (first == -1)   first = i; 
                last = i; 
            }
        }
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
};