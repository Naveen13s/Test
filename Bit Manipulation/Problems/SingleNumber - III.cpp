//Single Number - III
/* Given an array nums of length n, every integer in the array appears twice except for two integers. Identify and return the two integers that appear only once in the array. Return the two numbers in ascending order.
For example, if nums = [1, 2, 1, 3, 5, 2], the correct answer is [3, 5], not [5, 3].
Examples:
Input : nums = [1, 2, 1, 3, 5, 2]
Output : [3, 5]
Explanation : The integers 3 and 5 have appeared only once.

Input : nums = [-1, 0]
Output : [-1, 0]
Explanation : The integers -1 and 0 have appeared only once.

Input : nums = [1, 9, 1, 2, 8, 2]
Output:[8, 9]
Constraints:
•	2 <= nums.length <= 105
•	-3*105 <= nums[i] <= 3*105
•	Every integer in nums appears twice except two integers.

*/
#include <bits/stdc++.h>
using namespace std;
class Solution{	
	public:		
		vector<int> singleNumber(vector<int>& nums){
			vector<int> ans;
        unordered_map <int, int> mpp;
        for(int i=0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }
        for(auto it : mpp) {
            if(it.second == 1) {
                ans.push_back(it.first);
            }
        }  
        sort(ans.begin(), ans.end());
        return ans;
    }
};