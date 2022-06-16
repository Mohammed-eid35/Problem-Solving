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
 */
 var BSTIterator = function(root) {
    this.items = [];
    
    const inorder = (node) => {
        if (!node) return;
        
        inorder(node.left);
        this.items.push(node.val);
        inorder(node.right);
    };
    inorder(root);
    
    this.length = this.items.length;
    this.cur = -1;
    
    console.log(this.items);
};

/**
 * @return {number}
 */
BSTIterator.prototype.next = function() {
    return this.items[++this.cur];
};

/**
 * @return {boolean}
 */
BSTIterator.prototype.hasNext = function() {
    return this.cur + 1 < this.length;
};

/** 
 * Your BSTIterator object will be instantiated and called as such:
 * var obj = new BSTIterator(root)
 * var param_1 = obj.next()
 * var param_2 = obj.hasNext()
 */