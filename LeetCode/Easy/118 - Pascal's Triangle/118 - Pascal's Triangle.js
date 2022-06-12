/**
 * @param {number} numRows
 * @return {number[][]}
 */
var generate = function(numRows) {
    const ret = [];
    for (let i = 0; i < numRows; ++i) {
        ret[i] = [];
        ret[i][0] = 1;
        for (let j = 1; j < i; ++j) {
            ret[i][j] = ret[i - 1][j - 1] + ret[i - 1][j];
        }
        ret[i][i] = 1;
    }
    return ret;
};
