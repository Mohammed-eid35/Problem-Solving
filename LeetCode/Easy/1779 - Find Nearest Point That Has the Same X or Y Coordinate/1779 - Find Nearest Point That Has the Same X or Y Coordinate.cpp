class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int n = points.size(), minDis = INT_MAX, minIdx = -1;
        for (int i = 0; i < n; ++i) {
            if (points[i][0] == x || points[i][1] == y) {
                int dis = abs(x - points[i][0]) + abs(y - points[i][1]);
                if (dis < minDis) {
                    minDis = dis;
                    minIdx = i;
                }
            }
        }
        return minIdx;
    }
};