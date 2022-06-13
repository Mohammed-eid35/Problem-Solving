/**
 * @param {number[]} nums
 * @return {number}
 */
 var largestPerimeter = function(nums) {
    nums.sort((a, b) => a - b);
    
    const n = nums.length;
    for (let i = n - 1; i - 2 >= 0; --i) {
        if (nums[i] < nums[i - 1] + nums[i - 2]) {
            return nums[i] + nums[i - 1] + nums[i - 2];
        }
    }
    
    return 0;
};