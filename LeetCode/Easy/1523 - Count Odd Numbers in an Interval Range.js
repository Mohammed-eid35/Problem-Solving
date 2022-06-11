/**
 * @param {number} low
 * @param {number} high
 * @return {number}
 */
var countOdds = function(low, high) {
    return ((high + 1) >> 1) - (low >> 1);
};
