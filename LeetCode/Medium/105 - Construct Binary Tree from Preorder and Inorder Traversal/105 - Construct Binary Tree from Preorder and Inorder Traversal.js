/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {number[]} preorder
 * @param {number[]} inorder
 * @return {TreeNode}
 */
var buildTree = function(preorder, inorder) {
    let preorderPtr = 0, inorderPtr = 0
    
    const solve = x => {
        if (inorder[inorderPtr] != x) {
            let root = new TreeNode(preorder[preorderPtr++])
            root.left = solve(root.val)
            inorderPtr++
            root.right = solve(x)
            return root;
        }
        return null;
    }
    
    return solve();
};
