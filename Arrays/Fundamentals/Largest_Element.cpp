//Largest Element
/*Given an array of integers nums, return the value of the largest element in the array

Examples:
Input: nums = [3, 3, 6, 1]
Output: 6
Explanation: The largest element in array is 6

Input: nums = [3, 3, 0, 99, -40]
Output: 99
Explanation: The largest element in array is 99

Input: nums = [-4, -3, 0, 1, -8]
Output: 1
Constraints: 1 <= nums.length <= 105
-104 <= nums[i] <= 104
nums may contain duplicate elements.  */

class Solution {
    public: 
        int largestElement(vector<int>& nums) {
            int large = INT_MIN;
            for(int i = 0; i < nums.size(); i++) {
                if(nums[i] > large) {
                    large = nums[i];
                }
            }
            return large;
        }
};

