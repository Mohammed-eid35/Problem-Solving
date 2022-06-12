/**
 * @param {number[][]} matrix
 * @param {number} target
 * @return {boolean}
 */
var searchMatrix = function(matrix, target) {
    const n = matrix.length, m = matrix[0].length;
    
    let lo = 0, hi = n * m - 1;
    while (lo <= hi) {
        const mid = Math.floor((hi + lo) / 2),
              cur = matrix[Math.floor(mid / m)][mid % m];
        
        if (cur == target) return true;
        
        if (cur > target) hi = mid - 1;
        else lo = mid + 1;
    }
    return false;
};
