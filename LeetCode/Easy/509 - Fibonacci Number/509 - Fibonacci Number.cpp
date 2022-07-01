class Solution {
public:
    int fib(int n) {
        vector<int> fib(3);
        fib[1] = 1;
        for (int i = 2; i <= n; ++i) {
            fib[i % 3] = fib[(i - 1) % 3] + fib[(i - 2) % 3];
        }
        return fib[n % 3];
    }
};