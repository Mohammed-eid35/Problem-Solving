class Solution {
private:
    const int OO = 0x3f3f3f3f;
    
    vector<int> dx = {0,  0, 1, -1, 1,  1, -1, -1};
    vector<int> dy = {1, -1, 0,  0, 1, -1,  1, -1};
    int n, m;
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        n = grid.size(), m = grid[0].size();
        vector<vector<int>> dis(n, vector<int>(m, OO));
        queue<pair<int, int>> qu;
        qu.push({0, 0});
        dis[0][0] = 1;
        while (!qu.empty()) {
            pair<int, int> U = qu.front();
            qu.pop();
            
            if (grid[U.first][U.second]) continue;
            
            for (int k = 0; k < 8; ++k) {
                pair<int, int> V = {U.first + dx[k], U.second + dy[k]};
                
                if (valid(V.first, V.second) && dis[V.first][V.second] > dis[U.first][U.second] + 1) {
                    dis[V.first][V.second] = dis[U.first][U.second] + 1;
                    qu.push(V);
                }
            }
        }
        return (dis[n - 1][n - 1] == OO || grid[n - 1][n - 1] ? -1 : dis[n - 1][m - 1]);
    }
    
    bool valid(int i, int j) {
        return i >= 0 && i < n && j >= 0 && j < m;
    }
};