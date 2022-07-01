class Solution {
public:
    int climbStairs(int n) {
        vector<int> steps(3);
        steps[0] = steps[1] = 1;
        for (int i = 2; i <= n; ++i) {
            steps[i % 3] = steps[(i - 1) % 3] + steps[(i - 2) % 3];
        }
        return steps[n % 3];
    }
};