/// Link : https://atcoder.jp/contests/dp/tasks/dp_g
//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

const int MAXN = 1e5 + 5;
int n, m;
vector<vector<int>> vc(MAXN);
int dp[MAXN];

int longestPath(int indx) {
    if(vc[indx].empty()) return 0;
    int &ret = dp[indx];
    if(~ret) return ret;
    for(auto i : vc[indx]) ret = max(ret, 1 + longestPath(i));
    return ret;
}

void test() {
    cin >> n >> m;
    for(int i=0, x, y; i<m; ++i) {
        cin >> x >> y;
        vc[x].push_back(y);
    }
    memset(dp, -1, sizeof(dp));
    int ans = -1;
    for(int i=1; i<=n; ++i) ans = max(ans, longestPath(i));
    cout << ans;
}

int main() {  Mo35();

    int cases = 1; // cin >> cases;
    while(cases--) {
        test();
    }

    return 0;
}
