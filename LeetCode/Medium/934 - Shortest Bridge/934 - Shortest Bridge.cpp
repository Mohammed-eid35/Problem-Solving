class Solution {
private:
    vector<int> dx = {0,  0, 1, -1};
    vector<int> dy = {1, -1, 0,  0};
    int n;
    queue<vector<int>> qu;
public:
    int shortestBridge(vector<vector<int>>& grid) {
        n = grid.size();
        DFS(grid);
        return BFS(grid);
    }
    
    int BFS(vector<vector<int>> &grid) {
        int ret = INT_MAX;
        while (!qu.empty()) {
            vector<int> U = qu.front();
            qu.pop();
            
            for (int k = 0; k < 4; ++k) {
                vector<int> V = {U[0] + dx[k], U[1] + dy[k]};
                if (!valid(V[0], V[1])) continue;
                if (grid[V[0]][V[1]] == 1) {
                    ret = min(ret, grid[U[0]][U[1]]);
                    continue;
                }
                if (grid[V[0]][V[1]] == 0 || grid[V[0]][V[1]] > grid[U[0]][U[1]] + 1) {
                    grid[V[0]][V[1]] = grid[U[0]][U[1]] + 1;
                    qu.push(V);
                }
            }
        }
        return ret - 2;
    }
    
    void DFS(vector<vector<int>> &grid) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j]) {
                    DFS(grid, i, j);
                    return;
                }
            }
        }
    }
    void DFS(vector<vector<int>> &grid, int i, int j) {
        if (!valid(i, j) || grid[i][j] == 0 || grid[i][j] == 2) return;
        grid[i][j] = 2;
        qu.push({i, j});
        
        for (int k = 0; k < 4; ++k) {
            DFS(grid, i + dx[k], j + dy[k]);
        }
    }
    
    bool valid(int i, int j) {
        return min(i, j) >= 0 && max(i, j) < n;
    }
};