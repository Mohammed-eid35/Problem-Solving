/**
 * @param {number[][]} points
 * @param {number} k
 * @return {number[][]}
 */
 var kClosest = function(points, k) {
    points.sort((A, B) => ((A[0] ** 2 + A[1] ** 2) - (B[0] ** 2 + B[1] ** 2)));
    
    const ret = [];
    for (let i = 0; i < k; ++i) ret.push(points[i]);
    return ret;
};