//LCA in BST
/* Given the root node of a binary search tree (BST) and two node values p,q.
   Return the lowest common ancestors(LCA) of the two nodes in BST.
*/


class Solution {
   public:
    TreeNode* lca(TreeNode* root, int p, int q) {
        if (root == NULL) return NULL;

        if (p < root->data && q < root->data) return lca(root->left, p, q);

        if (p > root->data && q > root->data) return lca(root->right, p, q);

        return root;
    }
};