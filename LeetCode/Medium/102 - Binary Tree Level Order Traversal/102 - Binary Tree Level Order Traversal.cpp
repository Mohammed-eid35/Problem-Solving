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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (!root) return {};
        vector<vector<int>> ret;
        queue<TreeNode*> qu;
        qu.push(root);
        while (!qu.empty()) {
            int n = qu.size();
            vector<int> vc;
            while (n--) {
                vc.push_back(qu.front()->val);
                if (qu.front()->left) qu.push(qu.front()->left);
                if (qu.front()->right) qu.push(qu.front()->right);
                qu.pop();
            }
            ret.push_back(vc);
        }
        return ret;
    }
};