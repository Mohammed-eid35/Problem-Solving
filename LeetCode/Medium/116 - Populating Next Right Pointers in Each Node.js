/**
 * // Definition for a Node.
 * function Node(val, left, right, next) {
 *    this.val = val === undefined ? null : val;
 *    this.left = left === undefined ? null : left;
 *    this.right = right === undefined ? null : right;
 *    this.next = next === undefined ? null : next;
 * };
 */

/**
 * @param {Node} root
 * @return {Node}
 */
var connect = function(root) {
    if (!root) return root;
    const queue = [root];
    
    while (queue.length) {
        let cur;
        const n = queue.length;
        for (let i = 0; i < n - 1; ++i) {
            cur = queue.shift();
            cur.next = queue[0];

            if (cur.left) queue.push(cur.left);
            if (cur.right) queue.push(cur.right);
        }
        cur = queue.shift();
        if (cur.left) queue.push(cur.left);
        if (cur.right) queue.push(cur.right);
    }
    
    return root;
};
