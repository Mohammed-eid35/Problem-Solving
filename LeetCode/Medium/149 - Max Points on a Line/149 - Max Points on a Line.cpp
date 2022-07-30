class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n = points.size(), ret = 0;
        for (int i = 0; i < n; ++i) {
            map<pair<int, int>, int> cnt;
            int dup = 1;
            for (int j = i + 1; j < n; ++j) {
                if (points[j][0] == points[i][0] && points[j][1] == points[i][1]) dup++;
                else {
                    int dx = points[j][0] - points[i][0], dy = points[j][1] - points[i][1], g = gcd(dx, dy);
                    cnt[{dx / g, dy / g}]++;
                }
            }
            ret = max(ret, dup);
            for (auto point : cnt) ret = max(ret, point.second + dup);
        }
        return ret;
    }
    
    int gcd(int a, int b) {
        return b ? gcd(b, a % b) : a;
    }
};