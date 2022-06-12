/**
 * @param {number[][]} intervals
 * @return {number[][]}
 */
var merge = function(intervals) {
    intervals.sort((a , b) => a[0] - b[0]);
    const n = intervals.length;
    const ret = [intervals[0]];
    for (let i = 1; i < n; ++i) {
        const cur = intervals[i];
        const pre = ret[ret.length - 1];
        
        if (pre[1] < cur[0])
            ret.push(cur);
        else {
            ret.pop();
            ret.push([Math.min(pre[0], cur[0]), Math.max(pre[1], cur[1])]);
        }
    }
    return ret;
};
