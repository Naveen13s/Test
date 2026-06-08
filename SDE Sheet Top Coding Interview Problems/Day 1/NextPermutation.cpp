//Next Permutation
/* A permutation of an array of integers is an arrangement of its members into a sequence or linear order.
For example, for arr = [1,2,3], the following are all the permutations of arr:
[1,2,3], [1,3,2], [2,1,3], [2,3,1], [3,1,2], [3,2,1].
The next permutation of an array of integers is the next lexicographically greater permutation of its integers.
More formally, if all the permutations of the array are sorted in lexicographical order, then the next permutation of that array is the permutation that follows it in the sorted order.
If such arrangement is not possible (i.e., the array is the last permutation), then rearrange it to the lowest possible order (i.e., sorted in ascending order).
You must rearrange the numbers in-place and use only constant extra memory.  */

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int pivot = -1;
        int nextLargest = INT_MAX;
        for (int i = n - 1; i > 0; i--) {
            if (nums[i-1] >= nums[i]) {
            } else {
                pivot = i - 1;
                break;
            }
        }
        if (pivot == -1)
            reverse(nums.begin(), nums.end());
        else {
            int nextlargestIndex = -1;
            for (int i = n-1; i > pivot; i--) {
                if (nums[pivot] < nums[i]) {
                    if(nextLargest > nums[i]){
                        nextLargest = nums[i];
                        nextlargestIndex = i;
                    }
                }
            }
            swap(nums[nextlargestIndex], nums[pivot]);
            reverse(nums.begin() + pivot + 1, nums.end());
        }
    }
};