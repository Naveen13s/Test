//Power Set
/*
Given an array of integers nums of unique elements. Return all possible subsets (power set) of the array.

Do not include the duplicates in the answer.
Examples:
Input : nums = [1, 2, 3]
Output : [ [ ] , [1] , [2] , [1, 2] , [3] , [1, 3] , [2, 3] , [1, 2 ,3] ]
Input : nums = [1, 2]
Output : [ [ ] , [1] , [2] , [1,2] ]
Input : nums = [0]
Output:[ [ ] , [0] ]
Constraints:
•	1 <= nums.length <= 10
•	-10 <= nums[i] <= 10

*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
   private:
    void func(int ind, int n, vector<int> &nums, vector<int> &arr,
              vector<vector<int>> &ans) {
        if (ind == n) {
            ans.push_back(arr);
            return;
        }
        func(ind + 1, n, nums, arr, ans);
        arr.push_back(nums[ind]);
        func(ind + 1, n, nums, arr, ans);
        arr.pop_back();
    }

   public:
    vector<vector<int>> powerSet(vector<int> &nums) {
        vector<vector<int>> ans;  // List to store all subsets
        vector<int> arr;          // Temporary list to store the current subset
        func(0, nums.size(), nums, arr, ans);  // Start the recursive process
        return ans;                            // Return the list of all subsets
    }
};

