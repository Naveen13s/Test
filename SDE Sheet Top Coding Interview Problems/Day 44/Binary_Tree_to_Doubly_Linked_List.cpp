//Binary Tree to Doubly Linked List
/*Given a Binary Tree, convert it into a Doubly Linked List (DLL) in-place. The conversion should maintain the in-order traversal of the binary tree. In the DLL:
  The left pointer of each node should point to the previous node.
  The right pointer of each node should point to the next node.
Return the head node of the resulting doubly linked list.

You must not create any new nodes — only modify the left and right pointers of existing tree nodes.
*/
class Solution {
    TreeNode *head, *prev;
    void inorder(TreeNode *root) {
        if (!root) return;
        inorder(root->left);
        if (prev == NULL) {
            head = root;
        } else {
            prev->right = root;
            root->left = prev;
        }
        prev = root;

        inorder(root->right);
    }

public:
    TreeNode* bToDLL(TreeNode* root) {
        head = NULL;
        prev = NULL;

        inorder(root);

        if (head) head->left = NULL;
        if (prev) prev->right = NULL;

        return head;
    }
};