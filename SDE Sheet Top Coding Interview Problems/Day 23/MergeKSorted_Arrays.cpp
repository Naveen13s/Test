//Merge K Sorted Arrays
/* You are given k sorted arrays, each of size k. Merge all the arrays into one sorted array and return it.
  You should use an efficient algorithm with O(k² log k) time complexity.  */

class Solution {
public:
    vector<int> mergeKSortedArrays(vector<vector<int>>& arr, int k) {

        vector<int> result;

        priority_queue<
            vector<int>,
            vector<vector<int>>,
            greater<vector<int>>
        > pq;

        // {value, row, col}
        for (int i = 0; i < k; i++) {
            pq.push({arr[i][0], i, 0});
        }

        while (!pq.empty()) {

            auto curr = pq.top();
            pq.pop();

            int val = curr[0];
            int row = curr[1];
            int col = curr[2];

            result.push_back(val);

            if (col + 1 < arr[row].size()) {
                pq.push({arr[row][col + 1], row, col + 1});
            }
        }

        return result;
    }
};