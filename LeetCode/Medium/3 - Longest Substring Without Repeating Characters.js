/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function(s) {
    const n = s.length, fr = {};
    let l = 0, r = 0, max = 0;
    while (r < n) {
        while (l < r && fr[s[r]])
            fr[s[l++]]--;
        fr[s[r++]] = 1;
        max = Math.max(max, r - l);
    }
    return max;
};
