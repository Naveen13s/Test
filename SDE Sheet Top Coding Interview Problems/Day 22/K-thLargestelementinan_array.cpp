//K-th Largest element in an array
/* Given an array nums, return the kth largest element in the array.
   Example:
   Input: nums = [1, 2, 3, 4, 5], k = 2
   Output: 4
*/

class Solution {
public:
    int kthLargestElement(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;

        for (int num : nums) {
            pq.push(num);

            if (pq.size() > k) {
                pq.pop();
            }
        }

        return pq.top();
    }
};