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

    int n; cin >> n;
    vector<int> vc(n);
    for(int i = 0; i < n; ++i)
        cin >> vc[i];
    sort(vc.rbegin(), vc.rend());
    long long ans = 0;
    for(int i = 0; i < n; ++i) if(i % 3 == 2) {
        ans += vc[i];
    }
    cout << ans;

return 0;
}
