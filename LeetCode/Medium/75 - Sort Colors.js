/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var sortColors = function(nums) {
    const fr = {0: 0, 1: 0, 2: 0};
    const n = nums.length;
    for (let i = 0; i < n; ++i)  fr[nums[i]]++;

    for (let i = 0, j = 0; i < 3; ++i)
        while (j < n && fr[i]--) nums[j++] = i
};
