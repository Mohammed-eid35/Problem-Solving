/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var subarraySum = function(nums, k) {
    let ret = 0, r = 0;
    const fr = {0: 1};
    for (let i of nums) {
        r += i;
        const l = r - k;
        if (fr.hasOwnProperty(l)) ret += fr[l];
        fr[r] = fr[r] + 1 || 1;
    }
    return ret;
};
