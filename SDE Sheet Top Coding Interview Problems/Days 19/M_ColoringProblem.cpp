//M Coloring Problem
/* Given an integer M and an undirected graph with N vertices (zero indexed) and E edges. The goal is to determine whether the graph can be coloured with a maximum of M colors so that no two of its adjacent vertices have the same colour applied to them.
   In this context, colouring a graph refers to giving each vertex a different colour. If the colouring of vertices is possible then return true, otherwise return false.
*/

class Solution {
public:
    bool isSafe(int node, int color, vector<int>& colors,
                vector<vector<int>>& adj) {

        for (int neigh : adj[node]) {
            if (colors[neigh] == color)
                return false;
        }
        return true;
    }

    bool solve(int node, int m, int n,
               vector<int>& colors,
               vector<vector<int>>& adj) {

        if (node == n)
            return true;

        for (int color = 1; color <= m; color++) {

            if (isSafe(node, color, colors, adj)) {

                colors[node] = color;

                if (solve(node + 1, m, n, colors, adj))
                    return true;

                colors[node] = 0;
            }
        }

        return false;
    }

    bool graphColoring(vector<vector<int>>& edges, int m, int n) {

        vector<vector<int>> adj(n);

        for (auto &e : edges) {
            int u = e[0];
            int v = e[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> colors(n, 0);

        return solve(0, m, n, colors, adj);
    }
};
