/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function(nums) {
    const n = nums.length;
    const m = Math.floor(n / 2);
    const fr = {};
    
    for (let i = 0; i < n; ++i) {
        fr[nums[i]] = fr[nums[i]] + 1 || 1;
        if (fr[nums[i]] > m)
            return nums[i];
    }
};
