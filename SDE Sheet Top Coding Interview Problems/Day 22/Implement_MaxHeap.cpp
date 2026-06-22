//Implement Max Heap
/* You need to implement the Max Heap with the following given methods.
    insert (x) -> insert value x to the max heap
    getMax -> Output the maximum value from the max heap
    exctractMax -> Remove the maximum element from the heap
    heapSize -> return the current size of the heap
    isEmpty -> returns if heap is empty or not
    changeKey (ind, val) -> update the value at given index to val (index will be given 0-based indexing)
    initializeHeap -> Initialize the heap
  Note: When extracting max, if both left and right children are equal, you must swap with the LEFT child.
*/

class Solution {
    vector<int> heap;

    void heapifyUp(int idx) {
        while (idx > 0) {
            int parent = (idx - 1) / 2;

            if (heap[parent] < heap[idx]) {
                swap(heap[parent], heap[idx]);
                idx = parent;
            } else {
                break;
            }
        }
    }

    void heapifyDown(int idx) {
        int n = heap.size();

        while (true) {
            int left = 2 * idx + 1;
            int right = 2 * idx + 2;

            int largest = idx;

            if (left < n && heap[left] > heap[largest])
                largest = left;

            // Left child preferred when equal
            if (right < n && heap[right] > heap[largest])
                largest = right;

            if (largest == idx)
                break;

            swap(heap[idx], heap[largest]);
            idx = largest;
        }
    }

public:
    void initializeHeap() {
        heap.clear();
    }

    void insert(int x) {
        heap.push_back(x);
        heapifyUp(heap.size() - 1);
    }

    int getMax() {
        return heap[0];
    }

    void extractMax() {
        if (heap.empty()) return;

        heap[0] = heap.back();
        heap.pop_back();

        if (!heap.empty())
            heapifyDown(0);
    }

    int heapSize() {
        return heap.size();
    }

    bool isEmpty() {
        return heap.empty();
    }

    void changeKey(int ind, int val) {
        int oldVal = heap[ind];
        heap[ind] = val;

        if (val > oldVal)
            heapifyUp(ind);
        else
            heapifyDown(ind);
    }
};