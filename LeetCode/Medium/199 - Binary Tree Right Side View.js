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
 * @return {number[]}
 */
var rightSideView = function(root) {
    const ret = [];
    
    const solve = (node, height) => {        
        if (!node) return;
        ret[height] = node.val;
        solve(node.left, height + 1);
        solve(node.right, height + 1);
    };
    solve(root, 0);
    
    return ret;
};
