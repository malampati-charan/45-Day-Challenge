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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> returnable;

        inorderHelper(root, returnable);

        return returnable;
    }

    void inorderHelper(TreeNode* root, vector<int>& returnable) {
        if (root == nullptr) {
            return;
        }

        inorderHelper(root -> left, returnable);
        returnable.push_back(root -> val);
        inorderHelper(root -> right, returnable);
    }
};