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
 * @return {boolean}
 */
var isSymmetric = function(root) {
    if (!root) return true;
    
    const solve = (leftNode, rightNode) => {
        if (!leftNode && !rightNode) return true;
        if (!leftNode || !rightNode) return false;
        if (leftNode.val != rightNode.val) return false;
        
        return solve(leftNode.left, rightNode.right) && solve(leftNode.right, rightNode.left);
    };
    
    return solve(root.left, root.right);
};
