/**
 * @param {number[][]} mat
 * @return {number}
 */
 var diagonalSum = function(mat) {
    const n = mat.length;
    let sum = 0;
    for (let i = 0; i < n; ++i) sum += mat[i][i] + mat[i][n - i - 1];
    return sum - ((n & 1) ? mat[n >> 1][n >> 1] : 0);
};