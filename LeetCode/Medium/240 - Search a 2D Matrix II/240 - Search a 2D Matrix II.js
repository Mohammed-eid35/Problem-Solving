/**
 * @param {number[][]} matrix
 * @param {number} target
 * @return {boolean}
 */
var searchMatrix = function(matrix, target) {
    const n = matrix.length, m = matrix[0].length;
    
    const binarySearch = (row, value) => {
        let lo = 0, hi = row.length - 1;
        while (lo <= hi) {
            const mid = Math.floor((lo + hi) / 2);
            if (row[mid] == value) return true;
            if (row[mid] > value)
                hi = mid - 1;
            else
                lo = mid + 1;
        }
        return false;
    }
    
    for (let i = 0; i < n; ++i)
        if (binarySearch(matrix[i], target))
            return true;
    
    return false;
};
