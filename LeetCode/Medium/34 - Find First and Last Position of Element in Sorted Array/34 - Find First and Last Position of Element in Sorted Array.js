/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
 var searchRange = function(nums, target) {
    const n = nums.length;
    
    const start = binarySearch(0, n - 1, nums, target);
    const end = binarySearch(0, n - 1, nums, target + 1) - 1;

    return (nums[start] == target ? [start, end] : [-1, -1]);
};

var binarySearch = function(lo, hi, ar, target) {
    while (lo <= hi) {
        const mid = (lo + hi) >> 1;
        
        if (ar[mid] < target)
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    
    return lo;
};