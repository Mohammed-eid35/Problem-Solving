/**
 * @param {number[]} nums
 * @return {number[]}
 */
var sortedSquares = function(nums) {
    const ret = [];
    let l = 0, r = nums.length - 1, idx = r;
    
    while (l <= r) {
        if (nums[l] ** 2 > nums[r] ** 2)
            ret[idx--] = nums[l++] ** 2;
        else
            ret[idx--] = nums[r--] ** 2;
    }

    return ret; 
};
