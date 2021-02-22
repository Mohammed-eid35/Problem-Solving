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

    int n, d; cin >> n >> d;
    vector<int> vc(n);
    for (auto &in : vc) {
        cin >> in;
    }
    long long ans = 0;
    for (int l = 0, r = 0; l < n - 2; ++l){
        while (vc[l] + d >= vc[r] && r < n){
            r++;
        }

        ans += 1ll * (r - l - 2) * (r - l - 1) / 2;
    }

    cout << ans;

return 0;
}
