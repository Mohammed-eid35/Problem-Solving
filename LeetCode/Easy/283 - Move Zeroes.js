/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var moveZeroes = function(nums) {
    const n = nums.length;
    const zeros = [];
    for (let i = 0; i < n; ++i) {
        if (nums[i]) {
            if (zeros.length) {
                const idx = zeros.shift();
                nums[idx] = nums[i];
                nums[i] = 0;
                zeros.push(i);
            }
        }
        else 
            zeros.push(i);
    }
};
