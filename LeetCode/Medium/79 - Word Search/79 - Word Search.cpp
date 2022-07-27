class Solution {
private:
    vector<int> dx = {0,  0, 1, -1};
    vector<int> dy = {1, -1, 0,  0};
    int n, m, wordSize;
public:
    bool exist(vector<vector<char>>& board, string word) {
        n = board.size(), m = board[0].size();
        wordSize = word.size();
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (solve(i, j, 0, board, word)) return true;
            }
        }
        return false;
    }
    
    bool solve(int i, int j, int x, vector<vector<char>> &board, string &word) {
        if (x == wordSize) return true;
        if (!valid(i, j) || board[i][j] != word[x]) return false;

        char tmp = board[i][j];
        board[i][j] = '#';
        bool ret = false;
        for (int k = 0; k < 4; ++k) {
            ret |= solve(i + dx[k], j + dy[k], x + 1, board, word);
        }
        board[i][j] = tmp;
        return ret;
    }
    
    bool valid(int i, int j) {
        return i >= 0 && i < n && j >= 0 && j < m;
    }
};