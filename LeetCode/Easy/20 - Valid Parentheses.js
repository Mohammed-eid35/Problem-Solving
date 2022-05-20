/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function(s) {
    if (s.length === 0) return true
    if (s.length === 1) return false
    if (s.length % 2 !== 0) return false
    
    const stack = [];
    const rev = {
        '(' : ')',
        '{' : '}',
        '[' : ']'
    };
    const n = s.length;
    for (let i = 0; i < n; ++i) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            stack.push(s[i]);
        }
        else if (s[i] != rev[stack.pop()]) {
            return false;
        }
    }
    return !stack.length;
};
