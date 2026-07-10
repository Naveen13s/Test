//Populating Next Right Pointers in Each Node
/* You are given a perfect binary tree where:
   All leaves are on the same level, and
   Every parent has exactly two children.
You need to populate each next pointer so that it points to its next right node.
If there is no next right node, the next pointer should be set to NULL.
*/
class Solution {
public:
Node* connect(Node* root) {
    if(root == NULL) return NULL;
    if(root->left != NULL) root->left->next = root->right;
    if(root->right != NULL && root->next != NULL) root->right->next = root->next->left;
    connect(root->left);
    connect(root->right);
    return root;
   }
};