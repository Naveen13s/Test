//Second Largest Element
/*Given an array of integers nums, return the second-largest element in the array. If the second-largest element does not exist, return -1.

Examples:
Input: nums = [8, 8, 7, 6, 5]
Output: 7
Explanation: The largest value in nums is 8, the second largest is 7

Input: nums = [10, 10, 10, 10, 10]
Output: -1
Explanation: The only value in nums is 10, so there is no second largest value, thus -1 is returned

Input: nums = [7, 7, 2, 2, 10, 10, 10]
Output: 7
Constraints: 1 <= nums.length <= 105
-104 <= nums[i] <= 104
nums may contain duplicate elements.  */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) {
            return -1; 
        }
        sort(nums.begin(), nums.end());
        int largest = nums.back();

        int secondLargest = -1;
        for (int i = n-2; i >= 0; i--) {
            if (nums[i] != largest) {
                secondLargest = nums[i];
                break;

            }
        }
        return secondLargest ;
    }
};