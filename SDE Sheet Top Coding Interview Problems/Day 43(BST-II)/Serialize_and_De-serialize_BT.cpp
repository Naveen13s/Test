//Serialize and De-serialize BT
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
    void preorder(TreeNode* root, string &ans) {
        if (root == NULL) {
            ans += "N ";
            return;
        }

        ans += to_string(root->data) + " ";
        preorder(root->left, ans);
        preorder(root->right, ans);
    }

    string serialize(TreeNode* root) {
        string ans;
        preorder(root, ans);
        return ans;
    }

    TreeNode* build(vector<string> &nodes, int &idx) {
        if (idx >= nodes.size() || nodes[idx] == "N") {
            idx++;
            return NULL;
        }

        TreeNode* root = new TreeNode(stoi(nodes[idx++]));

        root->left = build(nodes, idx);
        root->right = build(nodes, idx);

        return root;
    }

    TreeNode* deserialize(string data) {
        vector<string> nodes;
        stringstream ss(data);
        string temp;

        while (ss >> temp)
            nodes.push_back(temp);

        int idx = 0;
        return build(nodes, idx);
    }
};
/*
* Your Codec object will be instantiated and called as such:
* Codec* ser = new Codec();
* Codec* deser = new Codec();
* string tree = ser->serialize(root);
* TreeNode* ans = deser->deserialize(tree);
* return ans;
*/