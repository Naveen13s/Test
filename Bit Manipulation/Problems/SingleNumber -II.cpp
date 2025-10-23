//Single Number - II
/*                              
Given an array nums where each integer in nums appears thrice except one. Find out the number that has appeared only once.
Examples:
Input : nums = [2, 2, 2, 3]
Output : 3
Explanation : The integers 3 has appeared only once.

Input : nums = [1, 0, 3, 0, 1, 1, 3, 3, 10, 0]
Output : 10
Explanation : The integers 10 has appeared only once.

Input : nums = [5, 0, 1, 10, 1, 1, 5, 5, 10, 10]
Output:0
Constraints:
•	1 <= n <= 3*104
•	-231 <= nums[i] <= 231 - 1

*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {        
        unordered_map <int, int> mpp;
        for(int i=0; i < nums.size(); i++) {
            mpp[nums[i]]++; 
        }
        for(auto it : mpp) {
            if(it.second == 1) {
                return it.first;
            }
        }
        return -1;
    }
};