/**
 * @param {number[][]} rooms
 * @return {boolean}
 */
 var canVisitAllRooms = function(rooms) {
    const n = rooms.length;
    const vis = Array(n);
    
    const solve = (room) => {
        if (vis[room]) return;
        vis[room] = true;
        
        for (let key of rooms[room]) solve(key);
    };
    solve(0);
    
    for (let v of vis) {
        if (!v) return false;
    }
    return true;
};