/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function(nums) {
    let ret = nums[0], mx = nums[0];
    const n = nums.length;
    for (let i = 1; i < n; ++i) {
        mx = Math.max(mx + nums[i], nums[i]);
        ret = Math.max(ret, mx);
    }
    return ret;
};
