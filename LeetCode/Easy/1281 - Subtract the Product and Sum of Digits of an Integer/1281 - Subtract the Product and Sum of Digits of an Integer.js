/**
 * @param {number} n
 * @return {number}
 */
var subtractProductAndSum = function(n) {
    let prod = 1, sum = 0;
    while (n) {
        const digit = n % 10;
        n = Math.floor(n / 10);
        
        prod *= digit;
        sum += digit;
    }
    
    return prod - sum;
};
