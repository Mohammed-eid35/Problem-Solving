/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
 var nextGreaterElement = function(nums1, nums2) {
    const n = nums2.length;
    const nxtGreater = {};
    
    for (let i = n - 1; ~i; --i) {
        for (let j = i + 1; j < n; ++j) {
            if (nums2[i] < nums2[j]) {
                nxtGreater[nums2[i]] = nums2[j];
                break;
            }
            if (nums2[i] < nxtGreater[nums2[j]]) {
                nxtGreater[nums2[i]] = nxtGreater[nums2[j]];
                break;
            }
        }
        if (!nxtGreater[nums2[i]]) nxtGreater[nums2[i]] = -1;
    }
    
    const ret = [];
    for (const num of nums1) ret.push(nxtGreater[num]);
    return ret;
};