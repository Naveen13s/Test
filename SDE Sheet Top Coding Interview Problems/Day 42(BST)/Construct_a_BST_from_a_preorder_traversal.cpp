//Construct a BST from a preorder traversal
/* Given an array of integers preorder, which represents the preorder traversal of a BST (i.e., binary search tree), construct the tree and return its root.
   It is guaranteed that it is always possible to find a binary search tree with the given requirements for the given test cases.
   Note : As there can be many possible correct answers, the compiler outputs true if the solution is correct, else false.
*/

class Solution {
   public:
    int idx = 0;
    TreeNode* build(vector<int>& preorder, int bound) {
        if (idx >= preorder.size() || preorder[idx] > bound) return NULL;

        TreeNode* root = new TreeNode(preorder[idx++]);

        root->left = build(preorder, root->data);
        root->right = build(preorder, bound);

        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        idx = 0;
        return build(preorder, INT_MAX);
    }
};