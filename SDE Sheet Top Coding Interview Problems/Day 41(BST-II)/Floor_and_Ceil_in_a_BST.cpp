//Floor and Ceil in a BST
/* Given a root of binary search tree and a key(node) value, find the floor and ceil value for that particular key value.
   Floor Value Node: Node with the greatest data lesser than or equal to the key value. 
   Ceil Value Node: Node with the smallest data larger than or equal to the key value.
   If a particular floor or ceil value is not present then output -1.
*/
/**
 * Definition for a binary tree node.
 * class TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution {
   public:
    vector<int> floorCeilOfBST(TreeNode* root, int key) {
        int floor = -1;
        int ceil = -1;
        TreeNode* curr = root;
        while (curr) {
            if (curr->data == key) {
                floor = curr->data;
                break;
            }

            if (curr->data < key) {
                floor = curr->data;
                curr = curr->right;
            } else {
                curr = curr->left;
            }
        }

        curr = root;

        // Find Ceil
        while (curr) {
            if (curr->data == key) {
                ceil = curr->data;
                break;
            }

            if (curr->data > key) {
                ceil = curr->data;
                curr = curr->left;
            } else {
                curr = curr->right;
            }
        }

        return {floor, ceil};
    }
};