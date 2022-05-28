/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var threeSum = function(nums) {
    const n = nums.length;
    const fr = {};
    nums.sort();
    for (let i = 0; i < n; ++i)
        fr[nums[i]] = i;
    
    const set = new Set();
    const ret = [];
    for (let i = 0; i < n; ++i) {
        for (let j = i + 1; j < n; ++j) {
            let kVal = -nums[i] - nums[j];
            if (fr.hasOwnProperty(kVal) && !set.has(`${[nums[i], nums[j], kVal]}`) && fr[kVal] > j) {
                ret.push([nums[i], nums[j], kVal]);
                set.add(`${[nums[i], nums[j], kVal]}`);
            }
        }
    }
    return ret;
};
