//Sum of Array Elements
/*Given an array nums, find the sum of elements of array using recursion.

Examples:
Input : nums = [1, 2, 3]
Output : 6
Explanation : The sum of elements of array is 1 + 2 + 3 => 6.

Input : nums = [5, 8, 1]
Output : 14
Explanation : The sum of elements of array is 5 + 8 + 1 => 14.

Input : nums = [12, 9, 17]
Output: 38
Constraints: 1 <= n <= 100
1 <= nums[i] <= 100
*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int arraySum(vector<int>& nums) {
            return arraySumHelper(nums, 0);
        }
    
    private:
        int arraySumHelper(vector<int>& nums, int i) {
            if (i == nums.size()) {
                return 0;
            }
            return nums[i] + arraySumHelper(nums, i + 1);
        }
};