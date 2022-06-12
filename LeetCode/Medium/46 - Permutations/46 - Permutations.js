/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var permute = function(nums) {
    const n = nums.length;
    const ret = [];

    const solve = (ar, vis) => {
        if (ar.length == n) {
            ret.push([...ar]);
            return;
        }

        for (let i = 0; i < n; ++i) {
            if (vis[i]) continue;

            vis[i] = true;
            ar.push(nums[i]);
            
            solve(ar, vis);
            
            ar.pop();
            vis[i] = false;
        }
    }
    solve([], Array(n).fill(false));
    
    return ret;
};
