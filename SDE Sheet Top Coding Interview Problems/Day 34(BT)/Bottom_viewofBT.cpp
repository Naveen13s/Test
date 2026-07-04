//Bottom view of BT
/* Given root of binary tree, return the bottom view of the binary tree.
   The bottom view of a binary tree is the set of nodes visible when the tree is viewed from the bottom. Return nodes from the leftmost node to the rightmost node. Also if 2 nodes are outside the shadow of the tree and are at the same position then consider the node that appears later in level traversal.
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
    vector<int> bottomView(TreeNode* root) {
        vector<int> ans;
        if (root == NULL) return ans;
        map<int, int> mp;
        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});
        while (!q.empty()) {
            auto curr = q.front();
            q.pop();

            TreeNode* node = curr.first;
            int hd = curr.second;

            // Overwrite to keep the bottom-most node
            mp[hd] = node->data;

            if (node->left) q.push({node->left, hd - 1});

            if (node->right) q.push({node->right, hd + 1});
        }

        for (auto& it : mp) ans.push_back(it.second);

        return ans;
    }
};