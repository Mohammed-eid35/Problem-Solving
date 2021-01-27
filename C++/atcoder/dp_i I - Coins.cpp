/// Link : https://atcoder.jp/contests/dp/tasks/dp_i
//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

const int N = 3e3 + 5;
int n;
double hd[N], dp[N][N];

double solve(int idx, int head) {
    if(idx == n) return (head ? 0 : 1);

    double& ret = dp[idx][head];
    if(ret != -1) return ret;

    return ret = solve(idx+1, head-1)*hd[idx] + solve(idx+1, head) * (1-hd[idx]);
}

int main() { Mo35();

    cin >> n;
    for(int i=0; i<n; ++i) cin >> hd[i];
    
    for(int i=0; i<N; ++i) for(int j=0; j<N; ++j) {
        dp[i][j] = -1;
    }
    
    double ans = 0;
    for(int i=n; i>n/2; --i)
        ans += solve(0, i);
    cout << fixed << setprecision(10) << ans;

return 0;
}
