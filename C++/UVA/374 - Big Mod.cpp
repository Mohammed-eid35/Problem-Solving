//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

long long fastPower(long long x, long long p, long long MOD) {
    long long ret = 1;
    while (p) {
        if (p & 1)
            ret = (ret * x) % MOD;
        x = (x * x) % MOD;
        p >>= 1;
    }
    return ret;
}

int main() {  Mo35();

    long long b, p, m;
    while (cin >> b >> p >> m)
        cout << fastPower(b, p, m) << '\n';

return 0;
}
