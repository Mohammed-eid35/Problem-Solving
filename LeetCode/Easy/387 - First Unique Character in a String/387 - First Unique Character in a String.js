/**
 * @param {string} s
 * @return {number}
 */
var firstUniqChar = function(s) {
    const fr = {};
    for (i of s) fr[i] = fr[i] + 1 || 1;
    
    const n = s.length;
    for (let i = 0; i < n; ++i) {
        if (fr[s[i]] == 1) return i;
    }
    
    return -1;
};
