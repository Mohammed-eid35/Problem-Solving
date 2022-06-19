/**
 * @param {string[]} words
 * @param {string} order
 * @return {boolean}
 */
 var isAlienSorted = function(words, order) {
    const fr = {};
    for (let i = 0; i < 26; ++i) fr[order[i]] = i;
    
    const n = words.length;
    for (let i = 1; i < n; ++i) {
        if (!compare(fr, words[i], words[i - 1])) {
            return false;
        }
    }
    
    return true;
};

var compare = function(fr, word1, word2) {
    const n1 = word1.length, n2 = word2.length;
    const n = Math.min(n1, n2);
    
    for (let i = 0; i < n; ++i) {
        if (fr[word1[i]] != fr[word2[i]]) {
            return (fr[word1[i]] > fr[word2[i]]);
        }
    }
    
    return (n1 >= n2);
};