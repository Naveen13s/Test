//Flatten Binary Tree to Linked List
/* You are given the root of a binary tree.
   Re-arrange the tree in place so that it becomes a singly linked list in-order of a preorder traversal:
   Each node’s right pointer must point to the next node in preorder.
   Each node’s left pointer must be set to null.
   The relative order of nodes must be exactly the preorder sequence of the original tree.
   The transformation must be done on the original tree structure; do not create any new nodes.
*/
/* class TreeNode {
       int val;
       TreeNode *left, *right;
       TreeNode(int x) : val(x), left(NULL), right(NULL) {}
   };
*/

class Solution {
public:
    void flatten(TreeNode* root) {
        queue<TreeNode*> q;
        preorder(root, q);
        if (!q.empty()) q.pop(); 
        while (!q.empty()) {
            root->right = q.front();
            root->left = nullptr;
            q.pop();
            root = root->right;
        }
    }

    void preorder(TreeNode* node, queue<TreeNode*>& q) {
        if (!node) return;
        q.push(node);
        preorder(node->left, q);
        preorder(node->right, q);
    }
};
