/// Link : https://atcoder.jp/contests/dp/tasks/dp_l
//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

const int MAXN = 3e3 + 5;
const long long OO = 1e18;
int n;
long long ar[MAXN], dp[MAXN][MAXN];

long long solve(int l = 0, int r = n-1) {
    if(l > r) return -OO;

    long long &ret = dp[l][r];
    if(~ret) return ret;

    if(l == r) return ret = ar[l];

    if(l+1 == r) return ret = abs(ar[l] - ar[r]);

    return ret = max(ar[l] - solve(l+1, r), ar[r] - solve(l, r-1));
}

void test() {
    cin >> n;
    for(int i=0; i<n; ++i) cin >> ar[i];
    memset(dp, -1, sizeof(dp));
    cout << solve();
}

int main() {  Mo35();

    int cases = 1; // cin >> cases;
    while(cases--) {
        test();
    }

return 0;
}
