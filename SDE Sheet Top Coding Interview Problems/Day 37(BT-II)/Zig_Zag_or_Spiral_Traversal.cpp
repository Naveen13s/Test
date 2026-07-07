//Zig Zag or Spiral Traversal
/* Given the root of a binary tree, return the zigzag level order traversal of its nodes' values. (i.e., from left to right, then right to left for the next level and alternate between).*/
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;

        if (root == NULL)
            return ans;

        queue<TreeNode*> q;
        q.push(root);

        bool leftToRight = true;

        while (!q.empty()) {
            int size = q.size();
            vector<int> level(size);

            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();

                int index = leftToRight ? i : size - 1 - i;
                level[index] = node->data;

                if (node->left)
                    q.push(node->left);

                if (node->right)
                    q.push(node->right);
            }

            ans.push_back(level);
            leftToRight = !leftToRight;
        }

        return ans;
    }
};