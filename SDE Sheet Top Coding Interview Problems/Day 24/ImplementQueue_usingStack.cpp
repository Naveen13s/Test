//Implement Queue using Stack
/* Implement a First-In-First-Out (FIFO) queue using two stacks. The implemented queue should support the following operations: push, pop, peek, and isEmpty.
   Implement the StackQueue class:
   void push(int x): Adds element x to the end of the queue.
   int pop(): Removes and returns the front element of the queue.
   int peek(): Returns the front element of the queue without removing it.
   boolean isEmpty(): Returns true if the queue is empty, false otherwise.
*/

class StackQueue {
    stack<int> s1, s2;

public:
    void push(int x) {
        s1.push(x);
    }

    int pop() {
        if (isEmpty()) return -1;

        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        int val = s2.top();
        s2.pop();

        return val;
    }

    int peek() {
        if (isEmpty()) return -1;

        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        return s2.top();
    }

    bool isEmpty() {
        return s1.empty() && s2.empty();
    }
};