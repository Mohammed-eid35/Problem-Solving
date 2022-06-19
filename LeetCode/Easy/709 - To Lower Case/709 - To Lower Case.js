/**
 * @param {string} s
 * @return {string}
 */
 var toLowerCase = function(s) {
    let ret = "";
    for (const c of s) {
        ret += (isUpper(c) ? toLower(c) : c);
    }
    return ret;
};

var isUpper = function(C) {
    return (charCode(C) >= charCode("A") && charCode(C) <= charCode("Z"));
};

var toLower = function(C) {
    return String.fromCharCode(charCode(C) + 32);
};

var charCode = function(C) {
    return C.charCodeAt(0);
};