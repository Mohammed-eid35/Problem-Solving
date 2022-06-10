/**
 * @param {number} n
 * @param {number} k
 * @return {number}
 */
var findTheWinner = function(n, k) {
    const queue = [];
    for (let i = 1; i <= n; ++i) queue.push(i);
    
    let cur = 0;
    while (queue.length > 1) {
        for (let i = 1; i < k; ++i) queue.push(queue.shift());
        queue.shift();
    }
    
    return queue[0];
};
