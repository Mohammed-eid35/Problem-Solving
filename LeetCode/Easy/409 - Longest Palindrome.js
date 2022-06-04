/**
 * @param {string} s
 * @return {number}
 */
var longestPalindrome = function(s) {
    const fr = {};
    let ret = 0;
    for (let i of s) {
        fr[i] = fr[i] + 1 || 1;
        if (!(fr[i] & 1)) ret += 2;
    }
    return s.length > ret ? ret + 1 : ret;
};
