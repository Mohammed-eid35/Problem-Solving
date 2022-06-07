/**
 * @param {number} n
 * @return {number}
 */
var climbStairs = function(n) {
    const ar = [0, 1, 0];
    for (let i = 2; i <= n + 1; ++i)
        ar[i % 3] = ar[(i + 1) % 3] + ar[(i + 2) % 3];
    
    return ar[(n + 1) % 3];
};
