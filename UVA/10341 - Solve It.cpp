//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int p, q, r, s, t, u;

void test() {
    bool notValid = (p * exp(-1) + q * sin(1) + r * cos(1) + s * tan(1) + t + u > 1e-9);
    notValid = notValid || (p + r + u < 0);
    if (notValid){
        cout << "No solution\n";
        return;
    }

    double lo = 0.0, hi = 1.0, mid, f;
    for (hi *= 0.5; hi > 1e-9; hi *= 0.5){
        mid = lo + hi;

        f = p * exp(-mid) + q * sin(mid) + r * cos(mid) + s * tan(mid) + t * mid * mid + u;

        if (f > 0) lo += hi;
    }
    cout << fixed << setprecision(4) << lo << '\n';
}

int main() {  Mo35();

    while (cin >> p >> q >> r >> s >> t >> u) {
        test();
    }

return 0;
}
