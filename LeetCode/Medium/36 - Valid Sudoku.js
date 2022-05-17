/**
 * @param {character[][]} board
 * @return {boolean}
 */
var isValidSudoku = function(board) {
    for (let i = 0; i < 9; ++i) {
        const row = {}, col = {}, box = {};

        for (let j = 0; j < 9; ++j) {
            const r = board[i][j];
            const c = board[j][i];
            const b = board[3 * Math.floor(i / 3) + Math.floor(j / 3)][3 * (i % 3) + (j % 3)];

            if (r != '.') {
                if (row.hasOwnProperty(r)) return false;
                row[r] = true;
            }
            if (c != '.') {
                if (col.hasOwnProperty(c)) return false;
                col[c] = true;
            }
            if (b != '.') {
                if (box.hasOwnProperty(b)) return false;
                box[b] = true;
            }
        }
    }
    return true;
};
