//Next Greater Element
/* Given an array arr of size n containing elements, find the next greater element for each element in the array in the order of their appearance.
   The next greater element of an element in the array is the nearest element on the right that is greater than the current element.
   If there does not exist a next greater element for the current element, then the next greater element for that element is -1.
*/
class Solution {
public:
    vector<int> nextLargerElement(vector<int>& arr) {
        int n = arr.size();

        vector<int> ans(n, -1);
        stack<int> st;

        for (int i = n - 1; i >= 0; i--) {

            while (!st.empty() && st.top() <= arr[i]) {
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