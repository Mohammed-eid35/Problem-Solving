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

const int N = 20 + 5, M = 1e4 + 5, OO = 0x3f3f3f3f, MOD = 1e9 + 7;

vector<int> bits;

void addBits(int n) {
    for (int i = 0; i <= 30; ++i) {
        if ((n >> i) & 1) bits[i]++;
    }
}

int calcNum() {
    int ret = 0;
    for (int i = 0; i <= 30; ++i) {
        if (bits[i]) ret += (1 << i);
    }
    return ret;
}

void remvBits(int n) {
    for (int i = 0; i <= 30; ++i) {
        if ((n >> i) & 1) bits[i]--;
    }
}

void test() {
    int n, v; cin >> n >> v;
    vector<int> vc(n);
    for (int i = 0; i < n; ++i) {
        cin >> vc[i];
    }
    bits = vector<int> (35);
    int res = 0, lo = 0, hi = 0;
    while (hi < n) {
        addBits(vc[hi]);
        while (calcNum() > v) remvBits(vc[lo++]);
        res = max(res, hi - lo + 1);
        hi++;
    }
    cout << res << '\n';
}

int main() {  Alien35();
    freopen("wifi.in", "rt", stdin);

    int t; cin >> t;
    while (t--) {
        test();
    }  

return 0;
}