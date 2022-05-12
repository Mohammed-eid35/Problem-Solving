/**
 * @param {string} text
 * @return {number}
 */
var maxRepOpt1 = function(text) {
    const fr = {};
    let n = text.length;
    for (let i = 0; i < n; ++i) {
        if (!fr[text[i]]) fr[text[i]] = 0;
        fr[text[i]]++;
    }

    let res = 0, i = 0, mx = 0;
    while (i < n) {
        let cur = count(text.substring(i));
        i += cur;
        if (i + 1 < n && text[i + 1] == text[i - 1]) {
                cur += count(text.substring(i + 1));
        }
        if (fr[text[i - 1]] > cur) cur++;
        mx = Math.max(mx, cur);
        cur = 0;
    }
    return mx;
};

const count = (str) => {
    if (str === "") return 0;
    
    let ret = 0;
    for (const ch of str) {
        if (str[0] == ch) 
            ret++;
        else 
            break;
    }
    return ret;
}
