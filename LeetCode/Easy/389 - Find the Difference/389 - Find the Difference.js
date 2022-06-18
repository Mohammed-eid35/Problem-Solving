/**
 * @param {string} s
 * @param {string} t
 * @return {character}
 */
 var findTheDifference = function(s, t) {
    const fr1 = countChars(s), fr2 = countChars(t);
    
    for (let i = 0; i < 26; ++i) {
        if (fr1[i] != fr2[i]) 
            return String.fromCharCode(i + 'a'.charCodeAt(0));
    }
};

var countChars = function(str) {
    const fr = Array(26).fill(0);
    for (const chr of str) fr[charCode(chr)]++;
    return fr;
};

var charCode = function(chr) {
    return chr.charCodeAt(0) - 'a'.charCodeAt(0);
};