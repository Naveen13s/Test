//N Queen
/* The challenge of arranging n queens on a n × n chessboard so that no two queens attack one another is known as the "n-queens puzzle."
   Return every unique solution to the n-queens puzzle given an integer n. The answer can be returned in any sequence.
   Every solution has a unique board arrangement for the placement of the n-queens, where 'Q' and '.' stand for a queen and an empty space, respectively.
   Here are the attack rules for N-Queens:
   Same Row - No two queens can be in the same row.
   Same Column - No two queens can be in the same column.
   Same Diagonal (top-left to bottom-right) - No two queens can share the same diagonal where (row - col) is equal.
   Same Anti-Diagonal (top-right to bottom-left) - No two queens can share the same anti-diagonal where (row + col) is equal.
*/
class Solution {
private: 
    bool isSafePlace(int n, vector<string>& nQueens, int row, int col) {
        for(int i=0; i<n; i++) {
            if(nQueens[i][col] == 'Q') {
                return false;
            }
        }
        for(int i=row-1, j=col-1; i>=0 && j>=0; i--, j--) {
            if(nQueens[i][j] == 'Q') {
                return false;
            }
        }
        for(int i=row-1, j=col+1; i>=0 && j<n; i--, j++) {
            if(nQueens[i][j] == 'Q') {
                return false;
            }
        }
        return true;
    }

    void solveNQueens(int n, vector<vector<string>>& output, vector<string>& nQueens, int row) {
        if(row == n) {
            output.push_back(nQueens);
            return;
        }
        for(int col=0; col<n; col++) {
            if(isSafePlace(n, nQueens, row, col)) {
                nQueens[row][col] = 'Q';
                solveNQueens(n, output, nQueens, row+1);
                nQueens[row][col] = '.';
            }
        }
    }

public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> output;  
        vector<string> nQueens(n, string(n, '.')); 
        solveNQueens(n, output, nQueens, 0); 
        return output;
    }
};