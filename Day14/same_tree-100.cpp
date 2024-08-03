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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<string> pValues;
        vector<string> qValues;

        // Let's verify it by inorder
        inorderHelper(p, pValues);
        inorderHelper(q, qValues);

        return pValues == qValues;
    }

    void inorderHelper(TreeNode* root, vector<string>& values) {
        if (root == nullptr) {
            values.push_back("null");
            return;
        }

        values.push_back(to_string(root -> val));
        inorderHelper(root -> left, values);
        inorderHelper(root -> right, values);
    }
};