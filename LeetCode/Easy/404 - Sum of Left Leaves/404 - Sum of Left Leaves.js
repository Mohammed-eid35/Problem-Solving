/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number}
 */
 var sumOfLeftLeaves = function(root) {
    return solve(root, false);
};


var solve = function(node, left) {
    if (!node) return 0;
    if (left && !node.left && !node.right) return node.val;
    
    return solve(node.left, true) + solve(node.right, false);
};