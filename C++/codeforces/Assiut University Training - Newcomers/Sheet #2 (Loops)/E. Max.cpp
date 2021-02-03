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
    int mx = -1, x;
    while(n--) {
        cin >> x;
        mx = max(mx, x);
    }
    cout << mx;

return 0;
}
