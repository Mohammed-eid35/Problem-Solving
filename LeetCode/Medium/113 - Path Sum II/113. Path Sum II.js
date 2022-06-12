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
 * @param {number} targetSum
 * @return {number[][]}
 */
 var pathSum = function(root, targetSum) {
    const ret = [], path = [];
    
    const solve = (node, sum) => {
        if (!node) return;
        
        if (!node.left && !node.right) {
            path.push(node.val);
            if (sum + node.val == targetSum) ret.push([...path]);
            path.pop();
            return;
        }
        
        path.push(node.val);
        solve(node.left, sum + node.val);
        solve(node.right, sum + node.val);
        path.pop();
    };
    solve(root, 0);
    
    return ret;
};