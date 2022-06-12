/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    let res = 0, pre = prices[0];
    for (let i of prices) {
        pre = Math.min(pre, i);
        res = Math.max(res, i - pre);
    }
    return res;
};
