//Search in BST
/* Given the root of a binary search tree (BST) and an integer val.
   Find the node in the BST that the node's value equals val and return the subtree rooted with that node. If such a node does not exist, return null.
*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* solve(TreeNode* root, int val) {
        if (root == NULL)
            return NULL;

        if (root->val == val)
            return root;

        if (root->val < val)
            return solve(root->right, val);
        else
            return solve(root->left, val);
    }

    TreeNode* searchBST(TreeNode* root, int val) { return solve(root, val); }
};