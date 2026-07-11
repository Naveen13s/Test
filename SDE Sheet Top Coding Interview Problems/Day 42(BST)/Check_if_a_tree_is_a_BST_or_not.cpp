//Check if a tree is a BST or not
/* Given the root node of a binary tree. Return true if the given binary tree is a binary search tree(BST) else false.
   A valid BST is defined as follows:
    - The left subtree of a node contains only nodes with key strictly less than the node's key.
    - The right subtree of a node contains only nodes with key strictly greater than the node's key.
    - Both the left and right subtrees must also be binary search trees.
*/
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
   public:
    bool check(TreeNode* root, long long mn, long long mx) {
        if (root == NULL) return true;
        if (root->data <= mn || root->data >= mx) return false; 
        return check(root->left, mn, root->data) && check(root->right, root->data, mx);
    }

    bool isBST(TreeNode* root) { return check(root, LLONG_MIN, LLONG_MAX); }
};