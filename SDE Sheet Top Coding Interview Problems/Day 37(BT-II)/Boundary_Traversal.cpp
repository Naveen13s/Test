//Boundary Traversal
/* Given a root of Binary Tree, perform the boundary traversal of the tree. 
   The boundary traversal is the process of visiting the boundary nodes of the binary tree in the anticlockwise direction, starting from the root.
   The boundary of a binary tree is the concatenation of the root, the left boundary, the leaves ordered from left-to-right, and the reverse order of the right boundary.
   The left boundary is the set of nodes defined by the following:
    - The root node's left child is in the left boundary. If the root does not have a left child, then the left boundary is empty.
    - If a node in the left boundary and has a left child, then the left child is in the left boundary.
    - If a node is in the left boundary, has no left child, but has a right child, then the right child is in the left boundary.
    - The leftmost leaf is not in the left boundary.
   The right boundary is similar to the left boundary, except it is the right side of the root's right subtree. Again, the leaf is not part of the right boundary, and the right boundary is empty if the root does not have a right child.
*/

class Solution {
   public:
    bool isLeaf(TreeNode* node) {
        return node->left == NULL && node->right == NULL;
    }
    void addLeftBoundary(TreeNode* root, vector<int>& ans) {
        TreeNode* curr = root->left;
        while (curr) {
            if (!isLeaf(curr)) ans.push_back(curr->data);
            if (curr->left)
                curr = curr->left;
            else
                curr = curr->right;
        }
    }

    void addLeaves(TreeNode* root, vector<int>& ans) {
        if (root == NULL) return;

        if (isLeaf(root)) {
            ans.push_back(root->data);
            return;
        }

        addLeaves(root->left, ans);
        addLeaves(root->right, ans);
    }

    void addRightBoundary(TreeNode* root, vector<int>& ans) {
        TreeNode* curr = root->right;
        vector<int> temp;

        while (curr) {
            if (!isLeaf(curr)) temp.push_back(curr->data);

            if (curr->right)
                curr = curr->right;
            else
                curr = curr->left;
        }

        for (int i = temp.size() - 1; i >= 0; i--) ans.push_back(temp[i]);
    }

    vector<int> boundary(TreeNode* root) {
        vector<int> ans;

        if (root == NULL) return ans;

        if (!isLeaf(root)) ans.push_back(root->data);

        addLeftBoundary(root, ans);
        addLeaves(root, ans);
        addRightBoundary(root, ans);

        return ans;
    }
};