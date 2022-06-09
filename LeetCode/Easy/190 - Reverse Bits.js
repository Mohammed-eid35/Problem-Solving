/**
 * @param {number} n - a positive integer
 * @return {number} - a positive integer
 */
var reverseBits = function(n) {
    let ret = 0;
    for (let i = 0; i < 32; ++i) {
        ret = (ret * 2) + (n & 1);
        n >>= 1;
    }
    return ret;
};
