//Rat in a Maze
/* Given a grid of dimensions n x n. A rat is placed at coordinates (0, 0) and wants to reach at coordinates (n-1, n-1).
   Find all possible paths that rat can take to travel from (0, 0) to (n-1, n-1). The directions in which rat can move are 'U' (up) , 'D' (down) , 'L' (left) , 'R' (right).
   The value 0 in grid denotes that the cell is blocked and rat cannot use that cell for travelling, whereas value 1 represents that rat can travel through the cell. If the cell (0, 0) has 0 value, then mouse cannot move to any other cell.
   Note :In a path no cell can be visited more than once.
         If there is no possible path then return empty vector.
*/
class Solution {
public:
    void solve(int i, int j, vector<vector<int>>& grid, int n,
               vector<vector<int>>& vis, string path,
               vector<string>& ans) {

        if (i == n - 1 && j == n - 1) {
            ans.push_back(path);
            return;
        }

        vis[i][j] = 1;

        // Down
        if (i + 1 < n && !vis[i + 1][j] && grid[i + 1][j] == 1) {
            solve(i + 1, j, grid, n, vis, path + 'D', ans);
        }

        // Left
        if (j - 1 >= 0 && !vis[i][j - 1] && grid[i][j - 1] == 1) {
            solve(i, j - 1, grid, n, vis, path + 'L', ans);
        }

        // Right
        if (j + 1 < n && !vis[i][j + 1] && grid[i][j + 1] == 1) {
            solve(i, j + 1, grid, n, vis, path + 'R', ans);
        }

        // Up
        if (i - 1 >= 0 && !vis[i - 1][j] && grid[i - 1][j] == 1) {
            solve(i - 1, j, grid, n, vis, path + 'U', ans);
        }

        vis[i][j] = 0; // Backtrack
    }

    vector<string> findPath(vector<vector<int>>& grid) {

        int n = grid.size();
        vector<string> ans;

        if (grid[0][0] == 0)
            return ans;

        vector<vector<int>> vis(n, vector<int>(n, 0));

        solve(0, 0, grid, n, vis, "", ans);

        sort(ans.begin(), ans.end());

        return ans;
    }
};