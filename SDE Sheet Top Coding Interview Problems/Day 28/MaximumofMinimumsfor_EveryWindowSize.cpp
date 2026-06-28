//Maximum of Minimums for Every Window Size
/* Given an array arr[] of size n, for every window size i from 1 to n, find the maximum of the minimum of all contiguous subarrays of size i.
   Return an array of size n where the i-th element contains the maximum of minimums for window size i + 1.
*/

class Solution {
public:
    vector<int> maxOfMin(vector<int>& arr) {
        int n = arr.size();

        vector<int> left(n), right(n);
        stack<int> st;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] >= arr[i])
                st.pop();

            left[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }

        while (!st.empty()) st.pop();
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] >= arr[i])
                st.pop();

            right[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        vector<int> ans(n + 1, INT_MIN);

        // Length of window where arr[i] is minimum
        for (int i = 0; i < n; i++) {
            int len = right[i] - left[i] - 1;
            ans[len] = max(ans[len], arr[i]);
        }

        // Fill remaining entries
        for (int i = n - 1; i >= 1; i--) {
            ans[i] = max(ans[i], ans[i + 1]);
        }

        ans.erase(ans.begin());

        return ans;
    }
};