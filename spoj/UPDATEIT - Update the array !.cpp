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

const int N = 100 + 5, M = 1e4 + 5, OO = 0x3f3f3f3f, MOD = 1e9 + 7;

void test() {
    int n, u; cin >> n >> u;
    vector<int> vc(n + 1);
    while (u--) {
        int st, en, val; cin >> st >> en >> val;
        vc[st] += val;
        vc[en + 1] -= val;
    }
    for (int i = 1; i < n; ++i) {
        vc[i] += vc[i - 1];
    }
    int q; cin >> q;
    while (q--) {
        int idx; cin >> idx;
        cout << vc[idx] << '\n';
    }
}

int main() {  Alien35();

    int t; cin >> t;
    while (t--) {
        test();
    }

return 0;
}
