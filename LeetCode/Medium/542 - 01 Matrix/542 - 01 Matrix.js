/**
 * @param {number[][]} mat
 * @return {number[][]}
 */
var updateMatrix = function(mat) {
    const n = mat.length, m = mat[0].length;
    for (let i = 0; i < n; ++i) {
        for (let j = 0; j < m; ++j) {
                if (!mat[i][j]) continue;
                mat[i][j] = Infinity;
                if (i - 1 >= 0) mat[i][j] = Math.min(mat[i][j], 1 + mat[i - 1][j]);
                if (j - 1 >= 0) mat[i][j] = Math.min(mat[i][j], 1 + mat[i][j - 1]);
        }
    }

    for (let i = n - 1; ~i; --i) {
        for (let j = m - 1; ~j; --j) {
            if (!mat[i][j]) continue;
            if (i + 1 < n) mat[i][j] = Math.min(mat[i][j], 1 + mat[i + 1][j]);
            if (j + 1 < m) mat[i][j] = Math.min(mat[i][j], 1 + mat[i][j + 1]);
        }
    }

    return mat;
};
