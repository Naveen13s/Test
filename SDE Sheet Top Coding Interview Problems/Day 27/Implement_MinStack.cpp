//Implement Min Stack
/* Design a stack that supports the following operations in constant time: push, pop, top, and retrieving the minimum element.*/

class MinStack {
private:
    vector<vector<int>> st;

public:
    MinStack() {
        
    }
    
    void push(int val) {
        int min_val = getMin();
        if (st.empty() || min_val > val) {
            min_val = val;
        }
        st.push_back({val, min_val});        
    }
    
    void pop() {
        st.pop_back();
    }
    
    int top() {
        return st.empty() ? -1 : st.back()[0];
    }
    
    int getMin() {
        return st.empty() ? -1 : st.back()[1]; 
    }
};