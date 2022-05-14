/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var intersect = function(nums1, nums2) {
    const fr = {};
    nums1.forEach(item => fr[item] = fr[item] + 1 || 1);
    const ret = [];
    nums2.forEach(item => {
        if (fr[item]) {
            ret.push(item);
            fr[item]--;
        }
    });
    return ret;
};
