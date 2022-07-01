class Solution {
private:
    vector<int> dx = {0,  0, 1, -1};
    vector<int> dy = {1, -1, 0,  0};
    int n, m, target, newColor;
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        n = image.size(), m = image[0].size();
        target = image[sr][sc];
        newColor = color;
        if (target == color) return image;
        DFS(sr, sc, image);
        return image;
    }
    
    void DFS(int i, int j, vector<vector<int>> &image) {
        if (!valid(i, j) || image[i][j] != target) return;
        image[i][j] = newColor;
        for (int k = 0; k < 4; ++k) DFS(i + dx[k], j + dy[k], image);
    }
    
    bool valid(int x, int y) {
        return x >= 0 && x < n && y >= 0 && y < m;
    }
};