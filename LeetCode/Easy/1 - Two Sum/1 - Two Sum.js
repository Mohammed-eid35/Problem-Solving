/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    const idx = {};
    const n = nums.length;
    for (let i = 0; i < n; ++i) {
        if (idx[target - nums[i]] !== undefined) {
            return [idx[target - nums[i]], i];
        }
        idx[nums[i]] = i;
    }
    return [];
};
