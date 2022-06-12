/**
 * @param {string} num1
 * @param {string} num2
 * @return {string}
 */
var addStrings = function(num1, num2) {
    let i = num1.length - 1, j = num2.length - 1;
    let sum = '', carry = 0;
     
    while (i >= 0 || j >= 0 || carry > 0) {
        const d1 = i < 0 ? 0 : num1[i] - '0';
        const d2 = j < 0 ? 0 : num2[j] - '0';
        const sumD = d1 + d2 + carry;
        sum = `${sumD % 10}${sum}`;
        carry = Math.floor(sumD / 10);
        i--; j--;
    }
    
    return sum;
};
