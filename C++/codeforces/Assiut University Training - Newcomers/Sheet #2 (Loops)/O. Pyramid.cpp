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
    for(int i=1; i<=n; ++i) {
        for(int j=1; j<=i; ++j)
            cout << '*';
        cout << '\n';
    }

return 0;
}
