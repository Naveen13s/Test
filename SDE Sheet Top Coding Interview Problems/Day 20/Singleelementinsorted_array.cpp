//Single element in sorted array
// Given an array nums sorted in non-decreasing order. Every number in the array except one appears twice. Find the single number in the array.

#include <bits/stdc++.h>  
using namespace std;
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;
        
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (mid % 2 == 1) mid--;


            if (nums[mid] == nums[mid + 1]) {
                low = mid + 2;
            } else {
                high = mid;
            }
        }
        
        return nums[low];
    }
};
