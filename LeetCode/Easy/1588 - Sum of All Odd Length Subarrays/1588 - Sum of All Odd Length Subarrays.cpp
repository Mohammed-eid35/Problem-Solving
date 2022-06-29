class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        vector<int> prefixSum(n + 1);
        for (int i = 1; i <= n; ++i) {
            prefixSum[i] = arr[i - 1] + prefixSum[i - 1];
        }
        int ret = 0;
        for (int i = 1; i <= n; ++i) {
            for (int j = i; j <= n; ++j) {
                if ((j - i + 1) & 1) ret += prefixSum[j] - prefixSum[i - 1];
            }
        }
        return ret;
    }
};