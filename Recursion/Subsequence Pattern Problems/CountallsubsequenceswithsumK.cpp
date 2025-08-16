//Count all subsequences with sum K
/*
Given an array nums and an integer k.Return the number of non-empty subsequences of nums such that the sum of all elements in the subsequence is equal to k.
Examples:
Input : nums = [4, 9, 2, 5, 1] , k = 10
Output : 2
Explanation : The possible subsets with sum k are [9, 1] , [4, 5, 1].
Input : nums = [4, 2, 10, 5, 1, 3] , k = 5
Output : 3
Explanation : The possible subsets with sum k are [4, 1] , [2, 3] , [5].
Input : nums = [1, 10, 4, 5] , k = 16
Output:
Constraints:
•	1 <= nums.length <= 20
•	1 <= nums[i] <= 100
•	1 <= k <= 2000

*/

#include <bits/stdc++.h>
using namespace std;
class Solution {
private:
    int func(int ind, int sum, vector<int> &nums) {
        if (sum == 0) return 1;
        if (sum < 0 || ind == nums.size()) return 0;
        return func(ind + 1, sum - nums[ind], nums) + func(ind + 1, sum, nums);
    }

public:
    // Function to start counting subsequences
    int countSubsequenceWithTargetSum(vector<int>& nums, int target) {
        return func(0, target, nums);
    }
};


