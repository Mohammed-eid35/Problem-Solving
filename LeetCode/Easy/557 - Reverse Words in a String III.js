/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    const stack = [];
    let ret = "";
    const n = s.length;
    for (let i = 0; i < n; ++i) {
        if (s[i] === ' ') {
            while (stack.length)
                ret += stack.pop();
            ret += ' ';
        }
        else
            stack.push(s[i]);
    }
    while (stack.length)
        ret += stack.pop();
    return ret;
};
