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

    int l1, r1, l2, r2; cin >> l1 >> r1 >> l2 >> r2;
    if(r1 < l2 || r2 < l1) cout << -1;
    else cout << max(l1, l2) << ' ' << min(r1, r2);

return 0;
}
