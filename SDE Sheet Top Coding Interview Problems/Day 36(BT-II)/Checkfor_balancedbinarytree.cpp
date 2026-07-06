//Check for balanced binary tree
/* Given a binary tree root, find if it is height-balanced or not.
   A tree is height-balanced if the difference between the heights of left and right subtrees is not more than one for all nodes of the tree. 
*/

class Solution {
   public:
    int height(TreeNode* root) {
        if (root == NULL) return 0;
        int left = height(root->left);
        if (left == -1) return -1;
        int right = height(root->right);
        if (right == -1) return -1;
        if (abs(left - right) > 1) return -1;
        return 1 + max(left, right);
    }

    bool isBalanced(TreeNode* root) { return height(root) != -1; }
};