/// Link : https://codeforces.com/contest/580/problem/D
//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

const long long N = 25, M = (1 << 20);
long long n, m, k, ar[N], dp[N][M], bonus[N][N];

long long countOnes(long long num) {
    long long cnt = 0;
    while(num) {
        if(num & 1) cnt++;
        num >>= 1;
    }
    return cnt;
}

long long solve(long long idx, long long msk){
    if(countOnes(msk) == m) return 0;

    long long& ret = dp[idx][msk];
    if(~ret) return ret;

    for(long long i=0; i<n; ++i) if(!(msk & (1 << i))) {
        ret = max(ret, solve(i+1, msk | (1 << i)) + ar[i] + bonus[idx][i+1]);
    }

    return ret;
}

int main() {  Mo35();

    cin >> n >> m >> k;
    for(long long i=0; i<n; ++i) cin >> ar[i];

    long long x, y, c;
    while(k--){
        cin >> x >> y >> c;
        bonus[x][y] = c;
    }

    memset(dp, -1, sizeof(dp));
    cout << solve(0, 0);

return 0;
}
