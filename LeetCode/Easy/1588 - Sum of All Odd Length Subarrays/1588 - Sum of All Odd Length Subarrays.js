/**
 * @param {number[]} arr
 * @return {number}
 */
 var sumOddLengthSubarrays = function(arr) {
    const n = arr.length;
    const prefixSum = Array(n + 1);
    prefixSum[0] = 0;
    for (let i = 1; i <= n; ++i) {
        prefixSum[i] = arr[i - 1] + prefixSum[i - 1];
    }
    let ret = 0;
    for (let i = 1; i <= n; ++i) {
        for (let j = i; j <= n; ++j) {
            if ((j - i + 1) & 1) ret += prefixSum[j] - prefixSum[i - 1];
        }
    }
    return ret;
};