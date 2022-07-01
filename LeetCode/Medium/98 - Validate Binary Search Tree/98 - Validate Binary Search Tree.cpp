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
    bool isValidBST(TreeNode* root) {
        const long long OO = 1e18;
        return valid(root, -OO, OO);
    }
    
    bool valid(TreeNode *root, long long mn, long long mx) {
        if (!root) return true;
        if (root->val <= mn || root->val >= mx) return false;
        return valid(root->left, mn, root->val) && valid(root->right, root->val, mx);
    }
};