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

void test() {
    long long n, k; cin >> n >> k;
    long long x = n / (k + 1);
    long long y = x * (x + 1) / 2;
    y *= (k + 1);
    y = n * x - y;
    y <<= 1;
    y += n;
    y = n * n - y;
    cout << y << '\n';
}

int main() {  Alien35();
    freopen("chess.in", "rt", stdin);

    int t; cin >> t;
    while (t--) {
        test();
    }  

return 0;
}