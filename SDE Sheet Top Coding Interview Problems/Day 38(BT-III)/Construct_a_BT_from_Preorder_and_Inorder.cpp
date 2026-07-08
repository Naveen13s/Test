//Construct a BT from Preorder and Inorder
/* Given two integer arrays preorder and inorder. Where preorder is the preorder traversal of a binary tree and inorder is the inorder traversal of the same tree.
   Construct and return the binary tree using in-order and preorder arrays.
*/

//Approach
/* - Store inorder values and their indices in a map for O(1) lookup.
   - Maintain a global index to track the current root in preorder.
   - Use recursion (helper) with start and end to define the current subtree range.
  At each step:
    - Pick the root from preorder[index].
    - Find its position in inorder to divide into left and right.
    - Recurse on left and right subtrees.
*/

class Solution {
public:
    int index = 0;
    unordered_map<int, int> map;

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for (int i = 0; i < inorder.size(); ++i)
            map[inorder[i]] = i;
        return helper(preorder, 0, inorder.size() - 1);
    }

    TreeNode* helper(vector<int>& preorder, int start, int end) {
        if (start > end) return nullptr;

        int rootVal = preorder[index++];
        TreeNode* root = new TreeNode(rootVal);
        int mid = map[rootVal];

        root->left = helper(preorder, start, mid - 1);
        root->right = helper(preorder, mid + 1, end);
        return root;
    }
};