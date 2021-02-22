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

    int t; cin >> t;
    while (t--) {
        int g, l; cin >> g >> l;
        if (l % g)
            cout << "-1\n";
        else
            cout << g << ' ' << l << '\n';
    }

return 0;
}
