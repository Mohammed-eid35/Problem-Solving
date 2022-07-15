class Solution {
private:
    const int OO = 0x3f3f3f3f;
    
    vector<int> dx = {0,  0, 1, -1};
    vector<int> dy = {1, -1, 0,  0};
    int n, m;
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        n = mat.size(), m = mat[0].size();
        vector<vector<int>> dis(n, vector<int>(m, OO));
        queue<pair<int, int>> qu;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (!mat[i][j]) {
                    qu.push({i, j});
                    dis[i][j] = 0;
                }
            }
        }
        while (!qu.empty()) {
            pair<int, int> U = qu.front();
            qu.pop();
            
            for (int k = 0; k < 4; ++k) {
                pair<int, int> V = {U.first + dx[k], U.second + dy[k]};
                
                if (valid(V.first, V.second) && dis[V.first][V.second] > dis[U.first][U.second] + 1) {
                    dis[V.first][V.second] = dis[U.first][U.second] + 1;
                    qu.push(V);
                }
            }
        }
        
        return dis;
    }
    
    bool valid(int i, int j) {
        return i >= 0 && i < n && j >= 0 && j < m;
    }
};