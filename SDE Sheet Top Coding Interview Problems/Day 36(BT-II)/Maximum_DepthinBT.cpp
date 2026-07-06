//Maximum Depth in BT
/* Given root of the binary tree, return its maximum depth.
   A binary tree's maximum depth is number of nodes along the longest path from root node down to the farthest node.
*/


class Solution {
public:
    int maxDepth(TreeNode* root) 
    {
        if(root == nullptr)
            return 0;
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};