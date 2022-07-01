class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size(), sum = 0;
        for (int i = 0; i < n; ++i) sum += mat[i][i] + mat[i][n - i - 1];
        return sum - ((n & 1) ? mat[n >> 1][n >> 1] : 0);
    }
};