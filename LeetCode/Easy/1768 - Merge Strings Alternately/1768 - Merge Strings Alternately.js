/**
 * @param {string} word1
 * @param {string} word2
 * @return {string}
 */
 var mergeAlternately = function(word1, word2) {
    const n1 = word1.length, n2 = word2.length;
    const n = Math.max(n1, n2);
    let ret = "";
    for (let i = 0; i < n; ++i) {
        if (i < n1) ret += word1[i];
        if (i < n2) ret += word2[i];
    }
    return ret;
};