//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;
 
void Alien35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
#ifndef ONLINE_JUDGE
    freopen("test.in", "rt", stdin);
    freopen("test.out", "wt", stdout);
#endif
}
 
const int N = 1e6 + 5, OO = 0x3f3f3f3f, MOD = 100;

int n, k, arr[N], dp[N];
vector<int> pos[N];

int solve(int i) {
    if (i == n) return 0;

    int &ret = dp[i];
    if (ret != -1) return ret;
    auto it = upper_bound(pos[arr[i]].begin(), pos[arr[i]].end(), i);
    ret = 1 + solve(*it);

    if (arr[i] == k) return ret;

    auto it2 = upper_bound(pos[arr[i]+1].begin(), pos[arr[i]+1].end(), i);

    return ret = min(ret, solve(*it2));
}

vector<int> v;
void build(int i) {
    if (i == n) return;

    int ans = dp[i];
    auto it = upper_bound(pos[arr[i]].begin(), pos[arr[i]].end(), i);
    auto it2 = upper_bound(pos[arr[i]+1].begin(), pos[arr[i]+1].end(), i);
    int a = 1 + solve(*it);

    if (ans == a) {
        v.push_back(i);
        build(*it);
    } else {
        build(*it2);
    }
}

int main () {  Alien35();
    
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        pos[arr[i]].emplace_back(i);
    }

    for (int i = 1; i <= k; i++) {
        pos[i].emplace_back(n);
    }

    memset(dp, -1, sizeof dp);
    int ans = solve(pos[1][0]);
    cout << ans << '\n';
    build(pos[1][0]);
    for (int i: v) cout << i+1 << " ";

return 0;
}
