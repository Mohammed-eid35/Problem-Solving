/// Link : https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=977
//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

const int MAXN = 1e4 + 5;
int n, k, ar[MAXN], dp[MAXN][105];

bool solve(int idx, int mod){
    if(idx == n) return (mod == 0);

    int& ret = dp[idx][mod];
    if(~ret) return ret;

    return ret = solve(idx + 1, ((mod + ar[idx]) %k + k) % k) || solve(idx + 1 , ((mod - ar[idx])% k + k) %k);
}

void test() {
    cin >> n >> k;
    for(int i=0; i<n;) cin >> ar[i++];
    memset(dp, -1, sizeof(dp));
    cout << (solve(1, (ar[0] + k) % k) ? "Divisible\n" : "Not divisible\n" );
}

int main() { Mo35();

    int t; cin >> t;
    while(t--) test();

return 0;
}
