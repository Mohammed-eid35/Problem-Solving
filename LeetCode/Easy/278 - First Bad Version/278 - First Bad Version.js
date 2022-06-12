/**
 * Definition for isBadVersion()
 * 
 * @param {integer} version number
 * @return {boolean} whether the version is bad
 * isBadVersion = function(version) {
 *     ...
 * };
 */

/**
 * @param {function} isBadVersion()
 * @return {function}
 */
var solution = function(isBadVersion) {
    /**
     * @param {integer} n Total versions
     * @return {integer} The first bad version
     */
    return function(n) {
        let lo = 1, hi = n, ret = 0;
        while (lo <= hi) {
            const mid = Math.floor((lo + hi) / 2);
            if (isBadVersion(mid)) {
                ret = mid;
                hi = mid - 1;
            }
            else
                lo = mid + 1;
        }
        return ret;
    };
};
