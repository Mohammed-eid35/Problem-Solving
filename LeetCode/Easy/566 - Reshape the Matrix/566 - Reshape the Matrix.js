/**
 * @param {number[][]} mat
 * @param {number} r
 * @param {number} c
 * @return {number[][]}
 */
var matrixReshape = function(mat, r, c) {
    const ar = mat.flat();
    if (ar.length !== r * c) return mat;

    const res = [];
    while (ar.length) res.push(ar.splice(0, c));
    
    return res;
};
