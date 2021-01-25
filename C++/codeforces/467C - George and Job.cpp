/// Link : https://codeforces.com/contest/467/problem/C
//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

const int MAXN = 5e3 + 5;
const long long OO = 1e18;
int n, m, k;
long long pre[MAXN], dp[MAXN][MAXN];

long long maxSumRange(int idx = 0, int ranges = k) {
    if(!ranges) return 0;
    if(idx > n) return -OO;

    long long &ret = dp[idx][ranges];
    if(~ret) return ret;

    ret = maxSumRange(idx+1, ranges);
    if(m+idx-1 <= n) ret = max(ret, pre[m+idx-1] - pre[idx-1] + maxSumRange(idx+m, ranges-1));

    return ret;
}

void test() {
    cin >> n >> m >> k;
    for(int i=1, x; i<=n; ++i) {
        cin >> x;
        pre[i] = pre[i-1] + x;
    }
    memset(dp, -1, sizeof(dp));
    cout << maxSumRange();
}

int main() {  Mo35();

    int cases = 1; // cin >> cases;
    while(cases--) {
        test();
    }

return 0;
}
