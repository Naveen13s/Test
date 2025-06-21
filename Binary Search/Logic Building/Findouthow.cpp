//Find out how many times the array is rotated
/*Given an integer array nums of size n, sorted in ascending order with distinct values. The array has been right rotated an unknown number of times, between 0 and n-1 (including). Determine the number of rotations performed on the array.

Examples:
Input : nums = [4, 5, 6, 7, 0, 1, 2, 3]
Output: 4
Explanation: The original array should be [0, 1, 2, 3, 4, 5, 6, 7]. So, we can notice that the array has been rotated 4 times.

Input: nums = [3, 4, 5, 1, 2]
Output: 3
Explanation: The original array should be [1, 2, 3, 4, 5]. So, we can notice that the array has been rotated 3 times.

Input: nums = [4, 5, 1, 2]
Output: 2
Constraints:
 n == nums.length
 1 <= n <= 104
 -104 <= nums[i] <= 104
 All the integers of nums are unique.   */


 #include <bits/stdc++.h>  
using namespace std;      

class Solution {
public:
    int findKRotation(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MAX, index = -1; 
        for (int i = 0; i < n; i++) {
            if (nums[i] < ans) {  
                ans = nums[i];  
                index = i;      
            }
        }
        return index;  
    }
};

