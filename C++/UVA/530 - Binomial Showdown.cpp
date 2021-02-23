//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

typedef unsigned long long ULL;

ULL nCr(ULL n, ULL r) {
    if (r > (n >> 1)) r = n - r;
    ULL ret = 1;
    for (ULL i = 0; i < r; ++i) {
        ret *= (n - i);
        ret /= (i + 1);
    }
    return ret;
}

int main() {  Mo35();

    ULL n, k;
    while(cin >> n >> k && (n + k)) {
        cout << nCr(n, k) << '\n';
    }

return 0;
}
