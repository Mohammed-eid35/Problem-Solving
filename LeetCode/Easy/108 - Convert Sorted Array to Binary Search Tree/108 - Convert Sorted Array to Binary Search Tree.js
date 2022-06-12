/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {number[]} nums
 * @return {TreeNode}
 */
var sortedArrayToBST = function(nums) {
    return constructTree(nums, 0, nums.length - 1);
};

var constructTree = function(nums, lo, hi) {
    if (lo > hi) return null;
    
    const mid = Math.floor((lo + hi) / 2);
    
    return new TreeNode(
        nums[mid],
        constructTree(nums, lo, mid - 1),
        constructTree(nums, mid + 1, hi)
    );
};
