/**
 * // Definition for a Node.
 * function Node(val, children) {
 *    this.val = val;
 *    this.children = children;
 * };
 */

/**
 * @param {Node|null} root
 * @return {number[]}
 */
 var preorder = function(root) {
    const ret = [];
    
    const solve = (node) => {
        if (!node) return;
        ret.push(node.val);
        
        for (const child of node.children) {
            solve(child);
        }
    };
    solve(root);
    
    return ret;
};