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
var inorderTraversal = function(root) {
    const ret = [];
    
    const solve = (cur) => {
        if (!cur) return;
        
        solve(cur.left);
        ret.push(cur.val);
        solve(cur.right);
    };
    solve(root);
    
    return ret;
};
