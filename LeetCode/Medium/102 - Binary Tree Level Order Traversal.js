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
 * @return {number[][]}
 */
var levelOrder = function(root) {
    if (!root) return [];
  
    const queue = [], ret = [];
    queue.push(root);
    while (queue.length) {
        const len = queue.length, curLevel = [];
        for (let i = 0; i < len; ++i) {
            const curNode = queue.shift();
            curLevel.push(curNode.val);
            if (curNode.left) queue.push(curNode.left);
            if (curNode.right) queue.push(curNode.right);
        }
        ret.push(curLevel);
    }
    
    return ret;
};
