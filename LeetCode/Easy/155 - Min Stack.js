
var MinStack = function() {
    this.stack = [];
    this.length = 0;
};

/** 
 * @param {number} val
 * @return {void}
 */
MinStack.prototype.push = function(val) {
    if (!this.length)
        this.stack.push([val, val]);
    else
        this.stack.push([val, Math.min(val, this.stack[this.length - 1][1])]);
    
    this.length++;
};

/**
 * @return {void}
 */
MinStack.prototype.pop = function() {
    this.stack.pop();
    this.length--;
};

/**
 * @return {number}
 */
MinStack.prototype.top = function() {
    return this.stack[this.length - 1][0];
};

/**
 * @return {number}
 */
MinStack.prototype.getMin = function() {
    return this.stack[this.length - 1][1];
};

/** 
 * Your MinStack object will be instantiated and called as such:
 * var obj = new MinStack()
 * obj.push(val)
 * obj.pop()
 * var param_3 = obj.top()
 * var param_4 = obj.getMin()
 */
