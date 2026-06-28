//Stock span problem
/* Given an array arr of size n, where each element arr[i] represents the stock price on day i. Calculate the span of stock prices for each day.
   The span Si for a specific day i is defined as the maximum number of consecutive previous days (including the current day) for which the stock price was less than or equal to the price on day i.
*/

class Solution {
public:
    vector<int> stockSpan(vector<int>& arr, int n) {
        vector<int> span(n);
        stack<int> st;

        for (int i = 0; i < n; i++) {

            while (!st.empty() && arr[st.top()] <= arr[i]) {
                st.pop();
            }

            if (st.empty())
                span[i] = i + 1;
            else
                span[i] = i - st.top();

            st.push(i);
        }

        return span;
    }
};