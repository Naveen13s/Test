//Celebrity Problem
/* A celebrity is a person who is known by everyone else at the party but does not know anyone in return. Given a square matrix M of size N x N where M[i][j] is 1 if person i knows person j, and 0 otherwise, determine if there is a celebrity at the party. Return the index of the celebrity or -1 if no such person exists.*/

class Solution {
public:
    int celebrity(vector<vector<int>>& M) {
        int N = M.size();

        stack<int> st;

        for (int i = 0; i < N; i++) {
            st.push(i);
        }

        while (st.size() > 1) {
            int a = st.top();
            st.pop();

            int b = st.top();
            st.pop();

            if (M[a][b] == 1)
                st.push(b);
            else
                st.push(a);
        }

        int candidate = st.top();

        for (int i = 0; i < N; i++) {
            if (i == candidate) continue;

            if (M[candidate][i] == 1 || M[i][candidate] == 0)
                return -1;
        }

        return candidate;
    }
};