//Floor and Ceil in Sorted Array
/*Given a sorted array nums and an integer x. Find the floor and ceil of x in nums. The floor of x is the largest element in the array which is smaller than or equal to x. The ceiling of x is the smallest element in the array greater than or equal to x. If no floor or ceil exists, output -1.
Examples:
Input : nums =[3, 4, 4, 7, 8, 10], x= 5
Output: 4 7
Explanation: The floor of 5 in the array is 4, and the ceiling of 5 in the array is 7.

Input : nums =[3, 4, 4, 7, 8, 10], x= 8
Output: 8 8
Explanation: The floor of 8 in the array is 8, and the ceiling of 8 in the array is also 8.

Input : nums = [2, 4, 6, 8, 10, 12, 14], x= 1
Output: [-1, 2]
Constraints:
  1 <= nums.length <= 105 
  0 < nums[i], x < 105 
  nums is sorted in ascending order.  */


  #include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        int floor = -1, ceil = -1;
        for (int num : nums) {
            if (num <= x && num > floor) floor = num;
            if (num >= x && (ceil == -1 || num < ceil)) ceil = num;
        }
        return {floor, ceil};
    }
};