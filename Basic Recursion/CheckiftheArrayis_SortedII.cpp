//Check if the Array is Sorted II
/**/


#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        bool isSorted(vector<int>& nums) {
            // Base case: if the vector has one or no element, it's sorted
            if (nums.size() <= 1) {
                return true;
            }
            return sort(nums, 0, 1);
        }
    private:
        bool sort(vector<int>& nums, int first, int second) {
            // Check if we've reached the end of the vector
            if (second == nums.size()) {
                return true;
            }
            // Return false if the current elements are out of order
            if (nums[first] > nums[second]) {
                return false;
            }
            // Recurse to the next pair
            return sort(nums, first + 1, second + 1);
        }
};