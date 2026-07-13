//Two sum in BST
/* Given the root of a binary search tree and an integer k.Return true if there exist two elements in the BST such that their sum is equal to k otherwise false.*/
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
    bool dfs(TreeNode* root, int k, unordered_set<int>& st) {
        if (!root) return false;
        if (st.count(k - root->data))
            return true;
        st.insert(root->data);
        return dfs(root->left, k, st) || dfs(root->right, k, st);
    }
    bool twoSumBST(TreeNode* root, int k) {
        unordered_set<int> st;
        return dfs(root, k, st);
    }
};