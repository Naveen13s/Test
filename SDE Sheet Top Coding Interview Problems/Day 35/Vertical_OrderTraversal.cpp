//Vertical Order Traversal
/* Compute the binary tree's vertical order traversal given its root.
   The left and right children of a node at location (row, col) will be at (row + 1, col - 1) and (row + 1, col + 1), respectively. The tree's root is located at (0, 0).
   The vertical order traversal of a binary tree is a list of top-to-bottom orderings for each column index starting from the leftmost column and ending on the rightmost column. There may be multiple nodes in the same row and same column. In such a case, sort these nodes by their values. Return the binary tree's vertical order traversal.
*/


class Solution {
   public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, map<int, multiset<int>>> nodes;
        queue<pair<TreeNode*, pair<int, int>>> q;
        q.push({root, {0, 0}});
        while (!q.empty()) {
            auto p = q.front();
            q.pop();
            TreeNode* node = p.first;
            int x = p.second.first;
            int y = p.second.second;

            nodes[x][y].insert(node->data);

            if (node->left) q.push({node->left, {x - 1, y + 1}});

            if (node->right) q.push({node->right, {x + 1, y + 1}});
        }

        vector<vector<int>> ans;

        for (auto& col : nodes) {
            vector<int> temp;

            for (auto& row : col.second) {
                temp.insert(temp.end(), row.second.begin(), row.second.end());
            }

            ans.push_back(temp);
        }

        return ans;
    }
};