/**
 * @param {number[][]} intervals
 * @return {number}
 */
var eraseOverlapIntervals = function(intervals) {
    intervals.sort((a, b) => a[1] - b[1]);
    let pre = intervals[0], removed = 0;
    const n = intervals.length;
    for (let i = 1; i < n; ++i) {
        if (intervals[i][0] < pre[1])
            removed++;
        else
            pre = intervals[i];
    }
    return removed;
};
