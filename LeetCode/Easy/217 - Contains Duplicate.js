/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
    const st = new Set(nums);
    return st.size < nums.length;
};
