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

const int N = 1e3 + 5, OO = 0x3f3f3f3f, MOD = 100;
const long double EPS = 1e-10;

int main() {  Alien35();

    int n; cin >> n;
    vector<int> A(n), B(n), C(n), D(n);
    for (int i = 0; i < n; ++i)
        cin >> A[i] >> B[i] >> C[i] >> D[i];
    long double lo = 0, hi = 1e10, mid;
    while (hi - lo > EPS) {
        mid = (lo + hi) * 0.5;
        long double sum = 0.0;
        for (int i = 0; i < n; ++i)
            sum += max(B[i] - mid * A[i], D[i] - mid * C[i]);

        if (sum < 0)
            hi = mid;
        else
            lo = mid;
    }
    cout << fixed << setprecision(15) << lo;

return 0;
}
