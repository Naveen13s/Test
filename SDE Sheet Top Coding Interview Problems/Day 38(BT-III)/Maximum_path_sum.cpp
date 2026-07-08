//Maximum path sum
/* In a binary tree, a path is a list of nodes where there is an edge between every pair of neighbouring nodes. A node may only make a single appearance in the sequence.
   The total of each node's values along a path is its path sum. Return the largest path sum of all non-empty paths given the root of a binary tree.
   Note: The path does not have to go via the root.
*/
/** Approach:
 * Perform postorder DFS traversal.
 At each node:
   - Recursively compute the max gain from the left and right children.
   - Ignore negative gains (treat them as 0).
   - Update the global max (ans) with the path going through this node: node.val + leftGain + rightGain.
   - Return to the parent: node.val + max(leftGain, rightGain) since parent can only continue on one side.
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans = INT_MIN;

    int helper(TreeNode* node) {
        if (!node) return 0;
        int left = max(helper(node->left), 0);
        int right = max(helper(node->right), 0);
        ans = max(ans, node->val + left + right);
        return node->val + max(left, right);
    }

    int maxPathSum(TreeNode* root) {
        helper(root);
        return ans;
    }
};
