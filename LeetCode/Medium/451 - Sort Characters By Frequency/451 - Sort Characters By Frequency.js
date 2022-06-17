/**
 * @param {string} s
 * @return {string}
 */
 var frequencySort = function(s) {
    const fr = {};
    for (const c of s) fr[c] = fr[c] + 1 || 1;
    
    const res = [];
    for (const item of Object.entries(fr)) res.push(item);
    
    res.sort((A, B) => B[1] - A[1]);
    
    let ret = "";
    for (const item of res) {
        for (let i = 0; i < item[1]; ++i) ret += item[0];
    }
    
    return ret;
};