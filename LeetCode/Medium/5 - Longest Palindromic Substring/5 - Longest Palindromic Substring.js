/**
 * @param {string} s
 * @return {string}
 */
var longestPalindrome = function(s) {
    const n = s.length;
    if (!n) return '';
    
    const getLen = (l, r) => {
        while (l >= 0 && r < n && s[l] == s[r]) {
            l--;
            r++;
        }
        return r - l -1;
    }
    
    let l = 0, len = 0;
    for (let i = 0; i < n; ++i) {
        const curLen = Math.max(getLen(i, i), getLen(i, i + 1));
        
        if (curLen > len) {
            l = i - ((curLen - 1) >> 1);
            len = curLen;
        }
    }
    return s.substr(l ,len);
};
