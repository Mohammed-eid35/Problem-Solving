/**
 * @param {number[]} salary
 * @return {number}
 */
var average = function(salary) {
    const n = salary.length;
    let min = Infinity, max = -Infinity, sum = 0;
    for (let i = 0; i < n; ++i) {
        sum += salary[i];
        min = Math.min(min, salary[i]);
        max = Math.max(max, salary[i]);
    }
    return (sum - max - min) / (n - 2);
};
