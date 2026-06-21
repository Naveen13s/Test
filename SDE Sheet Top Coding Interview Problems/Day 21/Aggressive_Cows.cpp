//Aggressive Cows
/* Given an array nums of size n, which denotes the positions of stalls, and an integer k, which denotes the number of aggressive cows, assign stalls to k cows such that the minimum distance between any two cows is the maximum possible. Find the maximum possible minimum distance.*/

class Solution {
public:
    bool canPlaceCows(vector<int>& nums, int k, int dist) {
        int cows = 1;
        int lastPos = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] - lastPos >= dist) {
                cows++;
                lastPos = nums[i];

                if (cows >= k)
                    return true;
            }
        }

        return false;
    }

    int aggressiveCows(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int low = 1;
        int high = nums.back() - nums.front();
        int ans = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (canPlaceCows(nums, k, mid)) {
                ans = mid;
                low = mid + 1; // try larger distance
            } else {
                high = mid - 1;
            }
        }

        return ans;
    }
};