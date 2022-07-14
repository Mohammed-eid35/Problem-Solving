class Solution {
private:
    vector<int> dx = {0,  0, 1, -1};
    vector<int> dy = {1, -1, 0,  0};
    int n, m;
public:
    int numEnclaves(vector<vector<int>>& grid) {
        n = grid.size(), m = grid[0].size();
        int counter = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j]) {
                    auto dfs = DFS(grid, i, j);
                    counter += (dfs.first * dfs.second);
                }
            }
        }
        return counter;
    }
    
    pair<int, bool> DFS(vector<vector<int>> &grid, int i, int j) {
        if (!valid(i, j)) return {0, false};
        if (!grid[i][j]) return {0, true};
        grid[i][j] = 0;
        
        int ret = 1; bool canTake = true;
        for (int k = 0; k < 4; ++k) {
            auto dfs = DFS(grid, i + dx[k], j + dy[k]);
            ret += dfs.first;
            canTake &= dfs.second;
        }
        
        return {ret, canTake};
    }
    
    bool valid(int i, int j) {
        return i >= 0 && i < n && j >= 0 && j < m;
    }
};