/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number[]}
 */
 var topKFrequent = function(nums, k) {
    const n = nums.length;
    const fr = {};
    
    for (const num of nums) fr[num] = fr[num] + 1 || 1;
    
    const res = [];
    for (const item of Object.entries(fr)) {
        res.push(item);
    }
    
    res.sort((a, b) => b[1] - a[1]);
    
    const ret = [];
    for (let i = 0; i < k; ++i) ret.push(res[i][0]);
    
    return ret;
};