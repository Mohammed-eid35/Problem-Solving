/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
 var backspaceCompare = function(s, t) {
    const st1 = [];
    for (const c of s) {
        if (c == '#') st1.pop();
        else st1.push(c);
    }
    
    const st2 = [];
    for (const c of t) {
        if (c == '#') st2.pop();
        else st2.push(c);
    }
    
    const n1 = st1.length, n2 = st2.length;
    if (n1 != n2) return false;
    
    for (let i = 0; i < n1; ++i) {
        if (st1[i] != st2[i]) return false;
    }
    return true;
};