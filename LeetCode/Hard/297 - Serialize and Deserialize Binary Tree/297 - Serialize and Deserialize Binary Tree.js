/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */

/**
 * Encodes a tree to a single string.
 *
 * @param {TreeNode} root
 * @return {string}
 */
 var serialize = function(root) {
    const items = [];

    const solve = (node) => {
        if (!node) {
            items.push(null);
            return;
        }

        items.push(node.val);
        solve(node.left);
        solve(node.right);
    };
    solve(root);
    
    return items;
};

/**
 * Decodes your encoded data to tree.
 *
 * @param {string} data
 * @return {TreeNode}
 */
var deserialize = function(data) {
    const solve = () => {
        if (!data.length) return;

        const value = data.shift();
        if (value === null) return null;

        const node = new TreeNode(value);
        node.left = solve();
        node.right = solve();
        return node;
    }

    return solve();
};

/**
 * Your functions will be called as such:
 * deserialize(serialize(root));
 */