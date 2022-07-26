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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        queue<TreeNode*> nodes;
        nodes.push(root);
        while (!nodes.empty()) {
            TreeNode *currentNode = nodes.front();
            nodes.pop();
            if (!currentNode) continue;
            
            if (isSubTree(currentNode, subRoot)) return true;
            nodes.push(currentNode->left);
            nodes.push(currentNode->right);
        }
        return false;
    }
    
    bool isSubTree(TreeNode *root1, TreeNode *root2) {
        if (!root1 && !root2) return true;
        if (!root1 || !root2) return false;
        if (root1->val != root2->val) return false;
        return isSubTree(root1->left, root2->left) && isSubTree(root1->right, root2->right);
    }
};