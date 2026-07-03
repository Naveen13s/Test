//Morris Inorder Traversal
/* Given root of binary tree, return the Inorder traversal of the binary tree.
   Morris Inorder Traversal is a tree traversal algorithm aiming to achieve a space complexity of O(1) without recursion or an external data structure.
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
    vector<int> getInorder(TreeNode* root) {
        vector<int> ans;
        TreeNode* curr = root;

        while (curr != NULL) {

            if (curr->left == NULL) {
                ans.push_back(curr->data);
                curr = curr->right;
            } else {

                TreeNode* prev = curr->left;

                while (prev->right != NULL && prev->right != curr)
                    prev = prev->right;

                if (prev->right == NULL) {
                    prev->right = curr;
                    curr = curr->left;
                } else {
                    prev->right = NULL;
                    ans.push_back(curr->data);
                    curr = curr->right;
                }
            }
        }

        return ans;
    }
};