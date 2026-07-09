//Children Sum Property in Binary Tree
/* Given the root of a binary tree, return true if and only if every node’s value is equal to the sum of the values stored in its left and right children.
   - For any missing ( null ) child, its value is treated as 0.
   - A leaf node automatically satisfies the rule because both children are null.
*/
/* class TreeNode {
       int val;
       TreeNode *left, *right;
       TreeNode(int x) : val(x), left(NULL), right(NULL) {}
   };
*/

class Solution {
public:
    bool checkChildrenSum(TreeNode* root) {
        if (root == NULL)
            return true;
        if (root->left == NULL && root->right == NULL)
            return true;
        int left = 0, right = 0;
        if (root->left)
            left = root->left->val;

        if (root->right)
            right = root->right->val;

        return (root->val == left + right) &&
               checkChildrenSum(root->left) &&
               checkChildrenSum(root->right);
    }
};