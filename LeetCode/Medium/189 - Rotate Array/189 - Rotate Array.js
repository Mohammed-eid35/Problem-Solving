/**
 * @param {number[]} nums
 * @param {number} k
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var rotate = function(nums, k) {
    const tmp = [];
    const n = nums.length;
    
    for (let i = 0; i < n; ++i)
        tmp[(i + k) % n] = nums[i];
  
    for (let i = 0; i < n; ++i)
        nums[i] = tmp[i];
};
