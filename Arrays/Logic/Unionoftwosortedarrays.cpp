//Union of two sorted arrays
/*Given two sorted arrays nums1 and nums2, return an array that contains the union of these two arrays. The elements in the union must be in ascending order.
The union of two arrays is an array where all values are distinct and are present in either the first array, the second array, or both.
Examples:
Input: nums1 = [1, 2, 3, 4, 5], nums2 = [1, 2, 7]
Output: [1, 2, 3, 4, 5, 7]
Explanation: The elements 1, 2 are common to both, 3, 4, 5 are from nums1 and 7 is from nums2

Input: nums1 = [3, 4, 6, 7, 9, 9], nums2 = [1, 5, 7, 8, 8]
Output: [1, 3, 4, 5, 6, 7, 8, 9]
Explanation: The element 7 is common to both, 3, 4, 6, 9 are from nums1 and 1, 5, 8 is from nums2

Input: nums1 = [3, 4, 4, 4], nums2 = [6, 7, 7]
Output: [3, 4, 6, 7]
Constraints: 1 <= nums1.length, nums2.length <= 1000
-104 <= nums1[i] , nums2[i] <= 104
Both nums1 and nums2 are sorted in non-decreasing order. */

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int> unionArray;
        int i = 0, j = 0;

        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] < nums2[j]) {
                if (unionArray.empty() || unionArray.back() != nums1[i]) {
                    unionArray.push_back(nums1[i]);
                }
                i++;
            } else if (nums1[i] > nums2[j]) {
                if (unionArray.empty() || unionArray.back() != nums2[j]) {
                    unionArray.push_back(nums2[j]);
                }
                j++;
            } else {
                if (unionArray.empty() || unionArray.back() != nums1[i]) {
                    unionArray.push_back(nums1[i]);
                }
                i++;
                j++;
            }
        }

        while (i < nums1.size()) {
            if (unionArray.empty() || unionArray.back() != nums1[i]) {
                unionArray.push_back(nums1[i]);
            }
            i++;
        }

        while (j < nums2.size()) {
            if (unionArray.empty() || unionArray.back() != nums2[j]) {
                unionArray.push_back(nums2[j]);
            }
            j++;
        }

        return unionArray;
    }
};