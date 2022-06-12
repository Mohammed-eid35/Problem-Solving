/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var search = function(nums, target) {
    let lo = 0, hi = nums.length;
    while (lo <= hi) {
        let mid = Math.floor((lo + hi) / 2);
        
        if (nums[mid] == target) return mid;
        
        if (nums[mid] > target)
            hi = mid - 1;
        else 
            lo = mid + 1;
    }
    return -1;
};
