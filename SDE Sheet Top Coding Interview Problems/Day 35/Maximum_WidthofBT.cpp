//Maximum Width of BT
/* Given the root of a binary tree, return the maximum width of the given tree.
   The maximum width of a tree is the maximum width among all levels. The width of a level is determined by measuring the distance between its end nodes, which are the leftmost and rightmost non-null nodes. The length calculation additionally takes into account the null nodes that would be present between the end nodes if a complete binary tree were to stretch down to that level.
*/


class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if (!root)
            return 0;
        int maxWidth = 0;
        queue<pair<TreeNode*, long long>> q;
        q.push({root, 0});
        while (!q.empty()) {
            int size = q.size();
            long long minIndex = q.front().second;
            long long first = 0, last = 0;
            for (int i = 0; i < size; i++) {
                long long currIndex = q.front().second - minIndex;
                TreeNode* node = q.front().first;
                q.pop();

                if (i == 0)
                    first = currIndex;
                if (i == size - 1)
                    last = currIndex;

                if (node->left)
                    q.push({node->left, 2 * currIndex + 1});
                if (node->right)
                    q.push({node->right, 2 * currIndex + 2});
            }
            maxWidth = max(maxWidth, (int)(last - first + 1));
        }
        return maxWidth;
    }
};