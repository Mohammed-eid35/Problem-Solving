/**
 * @param {number[]} nums
 * @return {number[]}
 */
var productExceptSelf = function(nums) {
    const n = nums.length;
    const ret = new Array(n);
    ret[0] = 1;
    for (let i = 1; i < n; ++i) ret[i] = ret[i - 1] * nums[i - 1];
    let suf = 1;
    for (let i = n - 1; i >= 0; --i) {
        ret[i] *= suf;
        suf *= nums[i];
    }
    return ret;
};
