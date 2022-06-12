/**
 * @param {string} s1
 * @param {string} s2
 * @return {boolean}
 */
var checkInclusion = function(s1, s2) {
    const n1 = s1.length, n2 = s2.length;
    if (n1 > n2) return false;

    const fr = Array(26).fill(0);
    for (let i = 0; i < n1; ++i) {
        fr[s1.charCodeAt(i) - 97]++;
        fr[s2.charCodeAt(i) - 97]--;
    }
    
    if (!fr.some(v => v !== 0)) return true;

    for (let i = n1; i < n2; ++i) {
        fr[s2.charCodeAt(i) - 97]--;
        fr[s2.charCodeAt(i - n1) - 97]++;
        
        if (!fr.some(v => v !== 0)) return true;
    }

    return false;
};
