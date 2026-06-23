//Top K Frequent Elements
/* Given an integer array nums and an integer k, return any order list of the k most frequent elements in nums.
   Your solution must run in better than O(n log n) time, where n = nums.length.
*/

class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        std::vector<std::pair<int, int>> bucket;
        for (const auto& pair : freq) {
            bucket.push_back(pair);
        }
        std::sort(bucket.begin(), bucket.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
            return a.second > b.second; 
        });
        std::vector<int> ans;
        for (int i = 0; i < k; ++i) {
            ans.push_back(bucket[i].first);
        }

        return ans;
    }
};