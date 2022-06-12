/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
    const fr = {};
    for (ch of s) fr[ch] = fr[ch] + 1 || 1;
    
    for (ch of t) {
        if (!fr[ch]) return false;
        fr[ch]--;
    }
    
    for (const i in fr) {
        if (fr[i]) return false;
    }
    
    return true;
};
