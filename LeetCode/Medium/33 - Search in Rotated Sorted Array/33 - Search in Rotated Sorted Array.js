/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
 var search = function(nums, target) {
    const n = nums.length;
    let lo = 0, hi = n - 1;
    while (lo < hi) {
        const mid = (lo + hi) >> 1;
        if (nums[mid] > nums[hi])
            lo = mid + 1;
        else 
            hi = mid;
    }

    const rotateIndex = lo;
    lo = 0; hi = n - 1;
    while (lo <= hi) {
        const m = (lo + hi) >> 1;
        const mid = (m + rotateIndex) % n;
        
        if (nums[mid] == target) return mid;
        
        if (nums[mid] < target) 
            lo = m + 1;
        else 
            hi = m - 1;
    }
    return -1;
};