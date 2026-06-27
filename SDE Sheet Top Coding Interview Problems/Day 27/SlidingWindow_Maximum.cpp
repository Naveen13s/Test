//Sliding Window Maximum
/* Given an array of integers arr, there is a sliding window of size k which is moving from the very left of the array to the very right. You can only see the k numbers in the window. Each time the sliding window moves right by one position. Return the max sliding window.*/

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {

        deque<int> dq;
        vector<int> ans;

        for (int i = 0; i < arr.size(); i++) {
            while (!dq.empty() && dq.front() <= i - k) {
                dq.pop_front();
            }
            while (!dq.empty() && arr[dq.back()] <= arr[i]) {
                dq.pop_back();
            }

            dq.push_back(i);
            if (i >= k - 1) {
                ans.push_back(arr[dq.front()]);
            }
        }

        return ans;
    }
};