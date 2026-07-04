//Top View of BT
/* Given the root of a binary tree, return the top view of the binary tree.
   The top view of a binary tree consists of the set of nodes visible when the tree is observed from above.
   Return the values of these nodes ordered from the leftmost to the rightmost position.
   If multiple nodes share the same horizontal distance from the root, only the node that appears first when traversing from left to right (i.e., the leftmost node) should be included in the result.
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
    vector<int> topView(TreeNode* root) {
        vector<int> ans;
        if (root == NULL)
            return ans;
        map<int, int> mp;
        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});
        while (!q.empty()) {
            auto curr = q.front();
            q.pop();

            TreeNode* node = curr.first;
            int hd = curr.second;

            // Store only the first node at each horizontal distance
            if (mp.find(hd) == mp.end())
                mp[hd] = node->data;

            if (node->left)
                q.push({node->left, hd - 1});

            if (node->right)
                q.push({node->right, hd + 1});
        }

        for (auto &it : mp)
            ans.push_back(it.second);

        return ans;
    }
};