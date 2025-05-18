//Merge Sorting
/*Given an array of integers, nums,sort the array in non-decreasing order using the merge sort algorithm. Return the sorted array.
A sorted array in non-decreasing order is one in which each element is either greater than or equal to all the elements to its left in the array.

Examples:
Input: nums = [7, 4, 1, 5, 3]
Output: [1, 3, 4, 5, 7]
Explanation: 1 <= 3 <= 4 <= 5 <= 7.
Thus the array is sorted in non-decreasing order.

Input: nums = [5, 4, 4, 1, 1]
Output: [1, 1, 4, 4, 5]
Explanation: 1 <= 1 <= 4 <= 4 <= 5.
Thus the array is sorted in non-decreasing order.  */

#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<int> mergeSort(vector<int>& nums) {
            helper(nums, 0, nums.size() - 1);
            return nums;
        }
    
        void helper(vector<int>& arr, int low, int high) {
            if (low >= high) {
                return;
            }
            int mid = (low + high) / 2;
    
            helper(arr, low, mid);
            helper(arr, mid + 1, high);
            merge(arr, low, high);
        }
    
        void merge(vector<int>& arr, int low, int high) {
            int mid = (low + high) / 2;
            int i = low;
            int j = mid + 1;
            vector<int> temp;
    
            while (i <= mid && j <= high) {
                if (arr[i] <= arr[j]) {
                    temp.push_back(arr[i]);
                    i++;
                } else {
                    temp.push_back(arr[j]);
                    j++;
                }
            }
    
            while (i <= mid) {
                temp.push_back(arr[i]);
                i++;
            }
            while (j <= high) {
                temp.push_back(arr[j]);
                j++;
            }
    
            for (int i = 0; i < temp.size(); i++) {
                arr[low + i] = temp[i];
            }
        }
    };