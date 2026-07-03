//Preorder Traversal
/* Given root of binary tree, return the preorder traversal of the binary tree.*/

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
    vector<int> ans;

    void dfs(TreeNode* root) {
        if (root == NULL)
            return;

        ans.push_back(root->data);   
        dfs(root->left);             
        dfs(root->right);            
    }

    vector<int> preorder(TreeNode* root) {
        ans.clear();
        dfs(root);
        return ans;
    }
};