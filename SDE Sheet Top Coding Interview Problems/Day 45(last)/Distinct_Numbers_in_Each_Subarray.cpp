//Distinct Numbers in Each Subarray
/* Given an integer array nums and an integer k, construct an array ans of size n-k+1 where ans[i] represents the number of distinct numbers in the subarray nums[i:i+k-1] = [nums[i], nums[i+1], ..., nums[i+k-1]].
   Return the array ans.
*/
class Solution {
public:
    vector<int> distinctNumbers(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        vector<int> ans;
        for (int i = 0; i < k; i++) {
            freq[nums[i]]++;
        }
        ans.push_back(freq.size());
        for (int i = k; i < nums.size(); i++) {
            // Remove left element
            freq[nums[i - k]]--;
            if (freq[nums[i - k]] == 0)
                freq.erase(nums[i - k]);

            // Add right element
            freq[nums[i]]++;

            ans.push_back(freq.size());
        }

        return ans;
    }
};