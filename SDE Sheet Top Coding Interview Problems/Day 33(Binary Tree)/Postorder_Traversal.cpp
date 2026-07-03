//Postorder Traversal
/* Given root of binary tree, return the Postorder traversal of the binary tree.*/
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

        dfs(root->left);      
        dfs(root->right);     
        ans.push_back(root->data); 
    }

    vector<int> postorder(TreeNode* root) {
        ans.clear();
        dfs(root);
        return ans;
    }
};