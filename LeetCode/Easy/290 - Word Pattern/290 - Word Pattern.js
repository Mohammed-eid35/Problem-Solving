/**
 * @param {string} pattern
 * @param {string} s
 * @return {boolean}
 */
var wordPattern = function(pattern, s) {
    const words = s.split(' ');
    const map = {};
    
    if (words.length != pattern.length) return false;
    if (new Set(words).size != new Set(pattern).size) return false;
    
    const n = pattern.length;
    for (let i = 0; i < n; ++i) {
        if (map.hasOwnProperty(pattern[i]) && map[pattern[i]] != words[i]) return false;
        map[pattern[i]] = words[i];
    }
    
    return true;
};
