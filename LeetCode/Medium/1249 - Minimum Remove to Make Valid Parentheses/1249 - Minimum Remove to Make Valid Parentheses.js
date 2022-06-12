/**
 * @param {string} s
 * @return {string}
 */
var minRemoveToMakeValid = function(s) {
    const n = s.length;
    const stack = [], toRemove = [];
    for (let i = 0; i < n; ++i) {
        if (s[i] == '(') stack.push(i);
        if (s[i] == ')') {
            if (!stack.length) toRemove.push(i);
            else stack.pop();
        }
    }
    for (let i = 0; i < stack.length; ++i) toRemove.push(stack[i]);
    
    let ret = '';
    for (let i = 0, j = 0; i < n; ++i) {
        if (j < toRemove.length && i == toRemove[j]) {
            j++;
            continue;
        }
        ret += s[i];
    }
    
    return ret;
};
