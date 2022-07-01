class Solution {
private:
    vector<int> dx = {0,  0, 1, -1};
    vector<int> dy = {1, -1, 0,  0};
    int n, m;
public:
    int numIslands(vector<vector<char>>& grid) {
        n = grid.size(), m = grid[0].size();
        int ret = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] == '1') {
                    ret++;
                    DFS(i, j, grid);
                }
            }
        }
        return ret;
    }
    
    void DFS(int i, int j, vector<vector<char>> &grid) {
        if (!valid(i, j) || grid[i][j] == '0') return;
        grid[i][j] = '0';
        for (int k = 0; k < 4; ++k) DFS(i + dx[k], j + dy[k], grid);
    }
    
    bool valid(int i, int j) {
        return i >= 0 && i < n && j >= 0 && j < m;
    }
};