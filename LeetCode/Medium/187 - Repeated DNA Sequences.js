/**
 * @param {string} s
 * @return {string[]}
 */
var findRepeatedDnaSequences = function(s) {
    const n = s.length;
    if (n < 10) return [];
    
    let cur = s.slice(0, 10);
    const set = new Set([cur]), ret = new Set();
    for (let i = 10; i < n; ++i) {
        cur = cur.slice(1) + s[i];
        if(set.has(cur)) ret.add(cur);
        else set.add(cur);
    }

    return [...ret];
};
