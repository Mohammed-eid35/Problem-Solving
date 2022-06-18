
/**
 * @param {number[]} nums
 * @return {number}
 */
 var findMin = function(nums) {
    let lo = 0, hi = nums.length - 1;
    while (lo < hi) {
        const mid = (lo + hi) >> 1;
        
        if (nums[mid] > nums[hi])
            lo = mid + 1;
        else 
            hi = mid;
    }
    return nums[lo];
};