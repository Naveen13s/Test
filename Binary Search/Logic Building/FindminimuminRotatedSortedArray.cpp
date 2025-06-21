//Find minimum in Rotated Sorted Array
/*Given an integer array nums of size N, sorted in ascending order with distinct values, and then rotated an unknown number of times (between 1 and N), find the minimum element in the array.

Examples:
Input : nums = [4, 5, 6, 7, 0, 1, 2, 3]
Output: 0
Explanation: Here, the element 0 is the minimum element in the array.

Input : nums = [3, 4, 5, 1, 2]
Output: 1
Explanation:Here, the element 1 is the minimum element in the array.

Input : nums = [4, 5, 6, 7, -7, 1, 2, 3]
Output: -7
Constraints:
n == nums.length
 1 <= n <= 104
 -104 <= nums[i] <= 104
 All the integers of nums are unique.
 nums is sorted and rotated between 1 and n times.  */

 #include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMin(vector<int> &arr) {
        int n = arr.size();
        int low = 0;
        int high = n - 1;
        while(low <= high )
        {
            int mid = low + (high - low)/2;
            if(arr[mid] < arr[high])
            {
                high = mid;
            }
            else{
                low = mid + 1;
                }
            }
             return arr[high];
            }
};
