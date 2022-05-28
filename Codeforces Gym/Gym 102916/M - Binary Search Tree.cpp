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

struct ST {
    int mn, mx;
    bool valid;
};

vector<int> vc[N];
vector<map<int, ST>> mp(N);

ST DFS(int node, int par) {
    if (mp[node].count(par)) return mp[node][par];

    int mn = node, mx = node; bool valid = true;
    bool lft = false, rit = false;
    for (auto v : vc[node]) {
        if (v == par) continue;

        ST ret = DFS(v, node);
        if (!ret.valid) valid = false;
        mn = min(mn, ret.mn);
        mx = max(mx, ret.mx);

        if (node >= ret.mn && node <= ret.mx) valid = false;
        if (node < ret.mn) {
            if (!lft) lft = true;
            else valid = false;
        }
        if (node > ret.mx) {
            if (!rit) rit = true;
            else valid = false;
        }
    }
    return mp[node][par] = {mn, mx, valid};
}

int main() {  Alien35();

    int n; cin >> n;
    for (int i = 1; i < n; ++i) {
        int u, v; cin >> u >> v;
        vc[u].push_back(v);
        vc[v].push_back(u);
    }
    for (int i = 1; i <= n; ++i) {
        if (vc[i].size() > 3) {
            cout << -1;
            return 0;
        }
    }
    vector<int> res;
    for (int i = 1; i <= n; ++i) {
        ST ret = DFS(i, -1);
        if (ret.valid) res.push_back(i);
    }
    if (res.empty()) res.push_back(-1);
    for (auto i : res) cout << i << ' ';


return 0;
}
