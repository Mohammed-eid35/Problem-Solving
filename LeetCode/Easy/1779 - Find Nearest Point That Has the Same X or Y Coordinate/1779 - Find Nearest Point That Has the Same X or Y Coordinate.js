/**
 * @param {number} x
 * @param {number} y
 * @param {number[][]} points
 * @return {number}
 */
 var nearestValidPoint = function(x, y, points) {
    const n = points.length;
    let minDis = Infinity, minIdx = -1;
    for (let i = 0; i < n; ++i) {
        if (points[i][0] == x || points[i][1] == y) {
            const dis = Math.abs(x - points[i][0]) + Math.abs(y - points[i][1]);
            if (dis < minDis) {
                minDis = dis;
                minIdx = i;
            }
        }
    }
    return minIdx;
};