//Next Smaller Element
/* Given an array of integers arr, your task is to find the Next Smaller Element (NSE) for every element in the array.
   The Next Smaller Element for an element x is defined as the first element to the right of x that is smaller than x.
   If there is no smaller element to the right, then the NSE is -1.
*/
class Solution {
public:
    vector<int> nextSmallerElements(vector<int>& arr) {
        int n = arr.size();

        vector<int> ans(n, -1);
        stack<int> st;

        for (int i = n - 1; i >= 0; i--) {

            while (!st.empty() && st.top() >= arr[i]) {
                st.pop();
            }

            if (!st.empty()) {
                ans[i] = st.top();
            }

            st.push(arr[i]);
        }

        return ans;
    }
};