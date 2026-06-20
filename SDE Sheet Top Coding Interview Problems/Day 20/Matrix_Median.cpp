//Matrix Median
/*Given a 2D array matrix that is row-wise sorted. The task is to find the median of the given matrix.
  Example 1
  Input: matrix=[ [1, 4, 9], [2, 5, 6], [3, 7, 8] ] 
  Output: 5
  Explanation: If we find the linear sorted array, the array becomes 1 2 3 4 5 6 7 8 9. So, median = 
*/

class Solution {
public:
    int findMedian(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        int low = INT_MAX;
        int high = INT_MIN;

        for (int i = 0; i < n; i++) {
            low = min(low, matrix[i][0]);
            high = max(high, matrix[i][m - 1]);
        }

        int req = (n * m) / 2;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            int count = 0;

            for (int i = 0; i < n; i++) {
                count += upper_bound(matrix[i].begin(),
                                     matrix[i].end(),
                                     mid) - matrix[i].begin();
            }

            if (count <= req)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return low;
    }
};