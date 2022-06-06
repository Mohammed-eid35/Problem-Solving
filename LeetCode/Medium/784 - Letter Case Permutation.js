/**
 * @param {string} s
 * @return {string[]}
 */
 var letterCasePermutation = function(s) {
    const n = s.length;
    const queue = [s];
    for (let i = 0; i < n; ++i) {
        if (/[0-9]/.test(s[i])) continue;

        const len = queue.length;
        for (let j = 0; j < len; ++j) {
            const cur = queue.shift();
            queue.push(cur.slice(0, i) + cur[i].toLowerCase() + cur.slice(i + 1));
            queue.push(cur.slice(0, i) + cur[i].toUpperCase() + cur.slice(i + 1));
        }
    }
    return queue;
};
