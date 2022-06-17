/**
 * @param {number[][]} accounts
 * @return {number}
 */
 var maximumWealth = function(accounts) {
    let ret = -Infinity;
    for (const account of accounts) {
        let sum = 0;
        for (const i of account) sum += i;
        ret = Math.max(ret, sum);
    }
    return ret;
};