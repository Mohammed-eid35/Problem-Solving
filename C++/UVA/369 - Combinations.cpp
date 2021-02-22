//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

typedef unsigned long long ull;

ull nCr(int n, int r) {
    ull ret = 1;
    for (int i = r + 1; i <= n; ++i) {
        ull d = (i - r);
        ull q = ret / d;
        ull rem = ret - (q * d);
        ret = (q * i) + (rem * i) / d;
    }
    return ret;
}

int main() {  Mo35();

    int n, m;
    while (cin >> n >> m && (n + m)) {
        cout << n << " things taken " << m << " at a time is " << nCr(n, m)  << " exactly.\n";
    }

return 0;
}
