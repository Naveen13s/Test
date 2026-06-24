//Implement Stack using Queue
/* Implement a Last-In-First-Out (LIFO) stack using a single queue. The implemented stack should support the following operations: push, pop, top, and isEmpty.
   Implement the QueueStack class:
   void push(int x): Pushes element x onto the stack.
   int pop(): Removes and returns the top element of the stack.
   int top(): Returns the top element of the stack without removing it.
   boolean isEmpty(): Returns true if the stack is empty, false otherwise.
*/

class QueueStack {
    queue<int> q;

public:
    void push(int x) {
        q.push(x);

        int sz = q.size();

        for (int i = 0; i < sz - 1; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {
        if (q.empty()) return -1;

        int val = q.front();
        q.pop();
        return val;
    }

    int top() {
        if (q.empty()) return -1;

        return q.front();
    }

    bool isEmpty() {
        return q.empty();
    }
};