/**
 * @param {string} s
 * @return {number[]}
 */
 var partitionLabels = function(s) {
    const idx = {};
    const n = s.length;
    for (let i = 0; i < n; ++i) idx[s[i]] = i;
    const ret = [];
    for (let i = 0, j = 0; i < n; i = j + 1) {
        j = i;
        let lastIndexOfJ = idx[s[j]];
        while (j < lastIndexOfJ) lastIndexOfJ = Math.max(lastIndexOfJ, idx[s[++j]]);
        ret.push(j - i + 1);
    }
    return ret;
};
