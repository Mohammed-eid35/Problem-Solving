/**
 * @param {number[][]} coordinates
 * @return {boolean}
 */
 var checkStraightLine = function(coordinates) {
    const n = coordinates.length;
    const p1 = coordinates[0], p2 = coordinates[1];

    for (let i = 2; i < n; ++i) {
        const p3 = coordinates[i];
        if ((p3[0] - p1[0]) * (p2[1] - p1[1]) !== (p3[1] - p1[1]) * (p2[0] - p1[0]))
            return false;
    }
    
    return true;
};