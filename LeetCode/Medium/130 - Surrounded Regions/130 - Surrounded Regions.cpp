class Solution {
private:
    vector<int> dx = {0,  0, 1, -1};
    vector<int> dy = {1, -1, 0,  0};
    vector<vector<bool>> visited;
    int n, m;
public:
    void solve(vector<vector<char>>& board) {
        n = board.size(), m = board[0].size();
        visited = vector<vector<bool>>(n, vector<bool>(m));
        queue<pair<int, int>> qu;
        for (int i = 0; i < n; ++i) {
            if (board[i][0] == 'O') qu.push({i, 0}); 
            if (board[i][m - 1] == 'O') qu.push({i, m - 1});
                
        }
        for (int i = 0; i < m; ++i) {
            if (board[0][i] == 'O') qu.push({0, i}); 
            if (board[n - 1][i] == 'O') qu.push({n - 1, i}); 
        }
        
        while (!qu.empty()) {
            auto [i, j] = qu.front();
            qu.pop();
            
            visited[i][j] = true;
            
            for (int k = 0; k < 4; ++k) {
                int x = i + dx[k];
                int y = j + dy[k];
                if (valid(x, y) && !visited[x][y] && board[x][y] == 'O') {
                    qu.push({x, y});
                }
            }
        }
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (board[i][j] == 'O' && !visited[i][j])
                    board[i][j] = 'X';
            }
        }
    }
    bool valid(int i, int j) {
        return i >= 0 && i < n && j >= 0 && j < m;
    }
};