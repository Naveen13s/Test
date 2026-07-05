//Print root to leaf path in BT
/* Given the root of a binary tree. Return all the root-to-leaf paths in the binary tree.
   A leaf node of a binary tree is the node which does not have a left and right child.
*/


class Solution {
   public:
    void dfs(TreeNode* root, vector<int>& path, vector<vector<int>>& ans) {
        if (root == NULL) return;
        path.push_back(root->data);
        if (root->left == NULL && root->right == NULL) {
            ans.push_back(path);
        } else {
            dfs(root->left, path, ans);
            dfs(root->right, path, ans);
        }

        path.pop_back();  // Backtrack
    }

    vector<vector<int>> allRootToLeaf(TreeNode* root) {
        vector<vector<int>> ans;
        vector<int> path;

        dfs(root, path, ans);

        return ans;
    }
};