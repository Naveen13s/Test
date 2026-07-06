//Diameter of Binary Tree
/* Given the root of a binary tree, return the length of the diameter of the tree.
   The diameter of a binary tree is the length of the longest path between any two nodes in the tree. It may or may not pass through the root.
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
    int diameterOfBinaryTree(TreeNode* root) {
        int res = 0;
        diameter(root, res);
        return res;
    }
private:
    int diameter(TreeNode* curr, int& res) {
        if (!curr)
            return 0;
        int left = diameter(curr->left, res);
        int right = diameter(curr->right, res);
        res = std::max(res, left + right);
        return std::max(left, right) + 1;
    }
};