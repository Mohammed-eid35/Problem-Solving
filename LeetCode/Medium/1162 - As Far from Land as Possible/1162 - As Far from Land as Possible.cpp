class Solution {
private:
    const int OO = 0x3f3f3f3f;
    vector<int> dx = {0,  0, 1, -1};
    vector<int> dy = {1, -1, 0,  0};
    int n, m;
public:
    int maxDistance(vector<vector<int>>& grid) {
        n = grid.size(), m = grid[0].size();
        vector<vector<int>> dis(n, vector<int>(m));
        queue<pair<int, int>> qu;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                dis[i][j] = OO;
                if (grid[i][j]) {
                    qu.push({i, j});
                    dis[i][j] = 0;
                }
            }
        }
        while (!qu.empty()) {
            pair<int, int> u = qu.front();
            qu.pop();
            
            for (int k = 0; k < 4; ++k) {
                pair<int, int> v = {u.first + dx[k], u.second + dy[k]};
                if (!valid(v.first, v.second)) continue;
                if (grid[v.first][v.second]) continue;
                if (dis[v.first][v.second] <= dis[u.first][u.second] + 1) continue;
                dis[v.first][v.second] = dis[u.first][u.second] + 1;
                qu.push(v);
            }
        }
        
        int mx = -1;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (dis[i][j] == OO || !dis[i][j]) continue;
                mx = max(mx, dis[i][j]);
            }
        }
        return mx;
    }
    
    bool valid(int i, int j) {
        return i >= 0 && i < n && j >= 0 && j < m;
    }
};