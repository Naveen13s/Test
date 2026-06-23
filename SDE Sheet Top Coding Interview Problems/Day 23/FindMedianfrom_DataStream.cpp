//Find Median from Data Stream
/*Implement a class that finds the median from a data stream. The median is the middle value in an ordered integer list. If the size of the list is even, there is no middle value, and the median is the mean of the two middle values.

Implement the MedianFInder class as follows:

MedianFinder() initializes the MedianFinder object.
void addNum(int num) adds the integer num to the data structure.
double findMedian() returns the median of all elements so far. Answers within 10-5 of the actual answer will be accepted.

*/
class MedianFinder {
public:
    priority_queue<int> LeftMaxHeap;
    priority_queue<int, vector<int>, greater<int>> RightMinHeap;
    MedianFinder() {}

    void balanceHeap() {
        if (RightMinHeap.size() > LeftMaxHeap.size()) {
            LeftMaxHeap.push(RightMinHeap.top());
            RightMinHeap.pop();
        } else {
            if (RightMinHeap.size() < LeftMaxHeap.size() - 1) {
                RightMinHeap.push(LeftMaxHeap.top());
                LeftMaxHeap.pop();
            }
        }
    }

    void addNum(int num) {
        if (LeftMaxHeap.empty()) {
            LeftMaxHeap.push(num);
            return;
        } else {
            if (num > LeftMaxHeap.top()) {
                RightMinHeap.push(num);
            } else {
                LeftMaxHeap.push(num);
            }
            balanceHeap();
        }
    }

    double findMedian() {
        if (LeftMaxHeap.size() > RightMinHeap.size()) {
            return LeftMaxHeap.top();
        } else {
            double ans = (LeftMaxHeap.top() + RightMinHeap.top()) / 2.0;
            return ans;
        }
    }
};