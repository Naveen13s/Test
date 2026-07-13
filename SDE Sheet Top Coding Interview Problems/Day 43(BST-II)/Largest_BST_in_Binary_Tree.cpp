//Largest BST in Binary Tree
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution {
    struct NodeInfo {
        int minVal;
        int maxVal;
        int size;
        NodeInfo(int mn, int mx, int sz) {
            minVal = mn;
            maxVal = mx;
            size = sz;
        }
    };

    NodeInfo solve(TreeNode* root) {
        // Empty tree is a BST
        if (!root) return NodeInfo(INT_MAX, INT_MIN, 0);

        NodeInfo left = solve(root->left);
        NodeInfo right = solve(root->right);

        // Current subtree is BST
        if (left.maxVal < root->data && root->data < right.minVal) {
            return NodeInfo(min(root->data, left.minVal),
                            max(root->data, right.maxVal),
                            left.size + right.size + 1);
        }

        // Not a BST
        return NodeInfo(INT_MIN, INT_MAX, max(left.size, right.size));
    }

   public:
    int largestBST(TreeNode* root) { return solve(root).size; }
};