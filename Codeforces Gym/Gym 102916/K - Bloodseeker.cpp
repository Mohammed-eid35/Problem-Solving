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

const int N = 2e5 + 5, OO = 0x3f3f3f3f, MOD = 100;

struct ST {
    int t, h;
    friend bool operator<(const ST &a, const ST &b) {
        return a.h < b.h;
    }
} ar[N];

void test() {
    long long n, m; cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> ar[i].t >> ar[i].h;
        ar[i].h = ar[i].h > m ? m : ar[i].h;
    }
    sort(ar, ar + n);
    for (int i = n - 1; ~i; --i) {
        if (ar[i].h >= ar[i].t) {
            m += ar[i].h - ar[i].t;
        }
    }
    for (int i = n - 1; ~i; --i) {
        if (ar[i].h >= ar[i].t) continue;
        m -= ar[i].t;
        if (m < 0) {
            cout << "NO\n";
            return;
        }
        m += ar[i].h;
    }
    cout << "YES\n";
}

int main() {  Alien35();

    int t; cin >> t;
    while (t--) {
        test();
    }

return 0;
}
