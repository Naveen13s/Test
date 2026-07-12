//Kth Smallest and Largest element in BST
/* Given the root node of a binary search tree (BST) and an integer k.
   Return the kth smallest and largest value (1-indexed) of all values of the nodes in the tree.
   Return the 1st integer as kth smallest and 2nd integer as kth largest in the returned array.
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
    int small = -1, large = -1;
    void inorder(TreeNode* root, int& k) {
        if (!root || k == 0) return;
        inorder(root->left, k);
        k--;
        if (k == 0) {
            small = root->data;
            return;
        }

        inorder(root->right, k);
    }

    void reverseInorder(TreeNode* root, int& k) {
        if (!root || k == 0) return;

        reverseInorder(root->right, k);

        k--;
        if (k == 0) {
            large = root->data;
            return;
        }

        reverseInorder(root->left, k);
    }

    vector<int> kLargesSmall(TreeNode* root, int k) {
        int k1 = k, k2 = k;

        inorder(root, k1);
        reverseInorder(root, k2);

        return {small, large};
    }
};