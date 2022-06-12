/**
 * @param {string} ransomNote
 * @param {string} magazine
 * @return {boolean}
 */
var canConstruct = function(ransomNote, magazine) {
    const fr = {};
    for (ch of magazine) fr[ch] = fr[ch] + 1 || 1;
    
    for (ch of ransomNote) {
        if (!fr[ch]) return false;
        fr[ch]--;
    }
    return true;
};
