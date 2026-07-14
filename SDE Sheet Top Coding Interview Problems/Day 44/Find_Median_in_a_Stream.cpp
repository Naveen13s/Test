//Find Median in a Stream

/* You are given a stream of integers arr[], arriving one by one. After each new integer is added to the stream, output the median of all elements seen so far.
   Return a list of medians — one after each insertion — where:
    - If the number of elements is odd, the middle element is the median.
    - If the number of elements is even, the average of the two middle elements is the median.
*/
class Solution {
public:
    vector<double> getMedian(vector<int> &arr) {
        priority_queue<int> left; 
        priority_queue<int, vector<int>, greater<int>> right; 
        vector<double> ans;
        for (int num : arr) {
            if (left.empty() || num <= left.top())
                left.push(num);
            else
                right.push(num);

            // Balance heaps
            if (left.size() > right.size() + 1) {
                right.push(left.top());
                left.pop();
            }
            else if (right.size() > left.size()) {
                left.push(right.top());
                right.pop();
            }

            // Find median
            if (left.size() == right.size()) {
                ans.push_back((left.top() + right.top()) / 2.0);
            } else {
                ans.push_back(left.top());
            }
        }

        return ans;
    }
};