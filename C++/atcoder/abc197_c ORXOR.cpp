//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {  Mo35();

    int n;
    cin >> n;
    vector<int> vc(n);
    for (int i = 0; i < n; ++i)
        cin >> vc[i];
    int ans = 2e9;
    for (int i = 0; i < 1 << (n - 1); ++i) {
        int r = 0, xr = 0;
        for (int j = 0; j <= n; ++j) {
            if (j < n)
                r |= vc[j];
            if (j == n || (i >> j & 1)) {
                xr ^= r;
                r = 0;
            }
        }
        ans = min(ans, xr);
    }
    cout << ans;

return 0;
}
