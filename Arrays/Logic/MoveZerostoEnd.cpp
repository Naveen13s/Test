//Move Zeros to End
/*Given an integer array nums, move all the 0's to the end of the array. The relative order of the other elements must remain the same. This must be done in place, without making a copy of the array.

Examples:
Input: nums = [0, 1, 4, 0, 5, 2]
Output: [1, 4, 5, 2, 0, 0]
Explanation: Both the zeroes are moved to the end and the order of the other elements stay the same

Input: nums = [0, 0, 0, 1, 3, -2]
Output: [1, 3, -2, 0, 0, 0]
Explanation: All 3 zeroes are moved to the end and the order of the other elements stay the same

Input: nums = [0, 20, 0, -20, 0, 20]
Output: [20, -20, 20, 0, 0, 0]
Constraints:
1 <= nums.length <= 105
-104 <=nums[i] <= 104  */

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:

    void moveZeroes(vector<int>& a) {
        int j = -1;
        int n = a.size();
        for (int i = 0; i < n; i++) {
            if (a[i] != 0) {
                j++;
                swap(a[i], a[j]);
            }
        }
    }
};