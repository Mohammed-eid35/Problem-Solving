/**
 * @param {number} n
 * @param {number} k
 * @return {number[][]}
 */
var combine = function(n, k) {
    const ret = [];
    let ar = [];

    const solve = (idx) => {
        if (idx > n) {
            if (ar.length == k) ret.push([...ar]);
            return;
        }

        solve(idx + 1);
        
        ar.push(idx);
        solve(idx + 1);
        ar.pop();
    }
    solve(1);
    return ret;
};
