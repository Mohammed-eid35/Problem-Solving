/**
 * @param {number[][]} image
 * @param {number} sr
 * @param {number} sc
 * @param {number} newColor
 * @return {number[][]}
 */
var floodFill = function(image, sr, sc, newColor) {
    const dirs = [[0, 1], [0, -1], [1, 0], [-1, 0]];
    const n = image.length, m = image[0].length;
    const target = image[sr][sc];
    if (target == newColor) return image;
    
    const valid = (x, y) => x >= 0 && x < n && y >= 0 && y < m;
    const DFS = (i, j) => {
        if (!valid(i, j) || image[i][j] != target) return;
        image[i][j] = newColor;
        for (let dir of dirs) DFS(i + dir[0], j + dir[1]);
    }
    DFS(sr, sc);
    return image;
};
