/**
 * @param {number} n
 * @param {number[][]} trust
 * @return {number}
 */
 var findJudge = function(n, trust) {
    const fr1 = Array(n).fill(0), fr2 = Array(n).fill(0);
    for (let item of trust) {
        fr1[item[0] - 1]++;
        fr2[item[1] - 1]++;
    }
    
    for (let i = 0; i < n; ++i) {
        if (fr1[i] === 0 && fr2[i] === n - 1) return i + 1;
    }
    
    return -1;
};