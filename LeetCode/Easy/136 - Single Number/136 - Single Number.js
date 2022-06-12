/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function(nums) {
    let ret = 0;
    
    const n = nums.length;
    for (let i = 0; i < n; ++i)
        ret ^= nums[i];
    
    return ret;
};
