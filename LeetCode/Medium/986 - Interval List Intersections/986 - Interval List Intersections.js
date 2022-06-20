/**
 * @param {number[][]} firstList
 * @param {number[][]} secondList
 * @return {number[][]}
 */
 var intervalIntersection = function(firstList, secondList) {
    const n1 = firstList.length, n2 = secondList.length;
    const ret = [];
    let i = 0, j = 0;
    while (i < n1 && j < n2) {
        const min = Math.max(firstList[i][0], secondList[j][0]);
        const max = Math.min(firstList[i][1], secondList[j][1]);
        
        if (min <= max) ret.push([min, max]);
        
        if (firstList[i][1] < secondList[j][1]) i++;
        else j++;
    }
    return ret;
};