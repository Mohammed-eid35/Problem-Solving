/**
 * @param {number} n
 * @return {boolean}
 */
 var isHappy = function(n) {
    const fr = {};
    
    while (n !== 1) {
        if (fr[n]) return false;
        fr[n] = true;
        
        n = sumSquareDigits(n);
    }
    
    return true;
};

var sumSquareDigits = function(num) {
    let ret = 0;
    
    while (num) {
        const digit = num % 10;
        num = Math.floor(num / 10);
        
        ret += digit * digit;
    }
    
    return ret;
}