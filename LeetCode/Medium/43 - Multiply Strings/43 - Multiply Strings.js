/**
 * @param {string} num1
 * @param {string} num2
 * @return {string}
 */
var multiply = function(num1, num2) {
    if (num1 === '0' || num2 === '0') return '0'
    
    const n = num1.length, m = num2.length, ret = new Array(n + m).fill(0)
    for (let i = n - 1; ~i; --i) {
        for (let j = m - 1; ~j; --j) {
            const x = i + j, y = i + j + 1;
            const prod = ret[y] + Number(num1[i]) * Number(num2[j]);
            ret[y] = prod % 10;
            ret[x] += Math.floor(prod / 10);
        }
    }
    if (ret[0] === 0) ret.shift();
    
    return ret.join('');
};
