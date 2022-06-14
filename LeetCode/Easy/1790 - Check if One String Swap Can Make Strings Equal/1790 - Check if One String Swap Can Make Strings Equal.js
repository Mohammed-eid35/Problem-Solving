/**
 * @param {string} s1
 * @param {string} s2
 * @return {boolean}
 */
 var areAlmostEqual = function(s1, s2) {
    const n1 = s1.length, n2 = s2.length;
    if (n1 != n2) return false;
    
    let counter = 0;
    const fr = Array(26).fill(0);
    for (let i = 0; i < n1; ++i) {
        if (s1[i] != s2[i]) counter++;
        fr[getCharCode(s1[i])]++;
        fr[getCharCode(s2[i])]--;
    }
    
    for (let i of fr) if (i) return false;
    
    return (counter <= 2);
};

var getCharCode = function(char = 'a') {
    return char.charCodeAt(0) - 'a'.charCodeAt(0);
};