/**
 * @param {number[]} arr
 * @return {boolean}
 */
 var canMakeArithmeticProgression = function(arr) {
    arr.sort((a, b) => a - b);
    const n = arr.length;
    for (let i = 2; i < n; ++i) {
        if (arr[i] - arr[i - 1] != arr[i - 1] - arr[i - 2]) return false;
    }
    return true;
};