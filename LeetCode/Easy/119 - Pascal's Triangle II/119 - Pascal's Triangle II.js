/**
 * @param {number} rowIndex
 * @return {number[]}
 */
var getRow = function(rowIndex) {
    const ret = []
    while (ret.length <= rowIndex) {
        ret.unshift(1)
        
        for (let i = 1; i < ret.length - 1; ++i)
            ret[i] += ret[i + 1]
    }
    return ret;
};
