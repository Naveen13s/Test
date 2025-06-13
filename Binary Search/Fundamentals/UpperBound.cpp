//Upper Bound
/*Given a sorted array of nums and an integer x, write a program to find the upper bound of x. The upper bound algorithm finds the first or the smallest index in a sorted array where the value at that index is greater than a given key i.e. x.
If no such index is found, return the size of the array.

Examples:
Input : n= 4, nums = [1,2,2,3], x = 2
Output:3
Explanation: Index 3 is the smallest index such that arr[3] > x.

Input : n = 5, nums = [3,5,8,15,19], x = 9
Output: 3
Explanation: Index 3 is the smallest index such that arr[3] > x.

Input : n = 5, nums = [3,5,8,15,19], x = 3
Output: 1
Constraints: 1 <= nums.length <= 105
  -105 < nums[i], x < 105
  nums is sorted in ascending order. */

  #include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int upperBound(vector<int> &nums, int x)
    {
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] > x)
            {
                return i;
            }
        }
        return n;
    }
};
