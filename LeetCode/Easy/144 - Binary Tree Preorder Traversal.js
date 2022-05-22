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
var preorderTraversal = function(root) {
    if (!root) return [];
    const stack = [], ret = [];
    
    stack.push(root);
    while (stack.length) {
        const cur = stack.pop();
        ret.push(cur.val);
        if (cur.right) stack.push(cur.right);
        if (cur.left) stack.push(cur.left);
    }
    
    return ret;
};
