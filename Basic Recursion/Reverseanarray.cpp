//Reverse an array
/*Given an array nums of n integers, return reverse of the array.

Examples:
Input : nums = [1, 2, 3, 4, 5]
Output : [5, 4, 3, 2, 1]

Input : nums = [1, 3, 3, 3, 5]
Output : [5, 3, 3, 3, 1]

Input : nums = [1, 2, 1]
Output: [1, 2, 1]
Constraints: 1 <= n <= 100
1 <= nums[i] <= 100  */


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> reverseArray(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;

        while (l < r) {  
            swap(nums[l], nums[r]);
            l++;
            r--;
        }
        return nums;
    }
};