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
        vector<vector<int>> ans = getAllPermutations(nums);
        
        int index = -1; 
        for(int i = 0; i < ans.size(); i++) {
            if(nums == ans[i]) {
                index = i;
                break;
            }
        }
        if(index == ans.size() - 1) nums = ans[0];
        else nums = ans[index + 1];
        
        return;
    }
    
private:
    vector<vector<int>> getAllPermutations(vector<int> &nums) {
        vector<vector<int>> ans;
        helperFunc(0, nums, ans);
        
        sort(ans.begin(), ans.end());
        return ans; 
    }
    void helperFunc(int ind, vector<int> &nums, 
                        vector<vector<int>> & ans) {
        if(ind == nums.size()) {
            ans.push_back(nums);
            return;
        }
        for(int i = ind; i < nums.size(); i++) {
            swap(nums[ind], nums[i]);
            helperFunc(ind+1, nums, ans);
            
            swap(nums[ind], nums[i]); 
        }
        
        return;
    }
};

