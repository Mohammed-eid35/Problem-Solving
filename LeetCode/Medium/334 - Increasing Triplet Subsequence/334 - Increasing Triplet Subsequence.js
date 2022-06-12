/**
 * @param {number[]} nums
 * @return {boolean}
 */
var increasingTriplet = function(nums) {
    let firstMin = Infinity, secondMin = Infinity;
    
    for (let num of nums) {
        if (num > secondMin) return true;
        
        if (num > firstMin) 
            secondMin = num;
        else
            firstMin = num;
    }
    
    return false;
};
