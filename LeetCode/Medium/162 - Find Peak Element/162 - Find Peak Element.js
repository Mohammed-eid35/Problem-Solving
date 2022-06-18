/**
 * @param {number[]} nums
 * @return {number}
 */
 var findPeakElement = function(nums) {
    const solve = (lo, hi) => {
        if (lo == hi) return lo;
        
        const mid = (lo + hi) >> 1;
        
        if (nums[mid] > nums[mid + 1]) return solve(lo, mid);
        
        return solve(mid + 1, hi);
    };
    
    return solve(0, nums.length - 1);
};