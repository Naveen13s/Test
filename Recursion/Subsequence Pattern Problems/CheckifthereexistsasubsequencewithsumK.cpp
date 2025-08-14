//Check if there exists a subsequence with sum K
/*
Given an array nums and an integer k. Return true if there exist subsequences such that the sum of all elements in subsequences is equal to k else false.
Examples:
Input : nums = [1, 2, 3, 4, 5] , k = 8
Output : Yes
Explanation : The subsequences like [1, 2, 5] , [1, 3, 4] , [3, 5] sum up to 8.
Input : nums = [4, 3, 9, 2] , k = 10
Output : No
Explanation : No subsequence can sum up to 10.
Input : nums = [1, 10, 4, 5] , k = 16
Output:Yes
Constraints:
•	1 <= nums.length <= 20
•	1 <= nums[i] <= 100
•	1 <= k <= 2000

*/

#include <bits/stdc++.h>
using namespace std;
class Solution {
   private:
    bool func(int ind, int sum, std::vector<int>& nums) {
        if (ind == nums.size()) {
            return sum == 0;
        }
        return func(ind + 1, sum - nums[ind], nums) | func(ind + 1, sum, nums);
    }

   public:
    // This method initiates the recursive process
    bool checkSubsequenceSum(std::vector<int>& nums, int target) {
        return func(0, target, nums);  // Start the recursive process
    }
};

