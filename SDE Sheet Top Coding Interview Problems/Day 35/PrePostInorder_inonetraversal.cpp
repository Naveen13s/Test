//Pre, Post, Inorder in one traversal
/* Given a binary tree with root node. Return the In-order,Pre-order and Post-order traversal of the binary tree.*/
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
    vector<vector<int>> treeTraversal(TreeNode* root) {
        vector<int> preorder, inorder, postorder;
        if (root == NULL) return {inorder, preorder, postorder};
        stack<pair<TreeNode*, int>> st;
        st.push({root, 1});
        while (!st.empty()) {
            auto it = st.top();
            st.pop();
            TreeNode* node = it.first;
            int state = it.second;

            if (state == 1) {
                // Preorder
                preorder.push_back(node->data);

                st.push({node, 2});

                if (node->left) st.push({node->left, 1});
            } else if (state == 2) {
                // Inorder
                inorder.push_back(node->data);

                st.push({node, 3});

                if (node->right) st.push({node->right, 1});
            } else {
                // Postorder
                postorder.push_back(node->data);
            }
        }

        return {inorder, preorder, postorder};
    }
};