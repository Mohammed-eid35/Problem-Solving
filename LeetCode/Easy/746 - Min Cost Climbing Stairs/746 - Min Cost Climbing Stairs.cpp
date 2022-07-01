class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> vc = {cost[0], cost[1], 0};
        int n = cost.size();
        cost.push_back(0);
        for (int i = 2; i <= n; ++i) {
            vc[i % 3] = cost[i] + min(vc[(i - 1) % 3], vc[(i - 2) % 3]);
        }
        return vc[n % 3];
    }
};