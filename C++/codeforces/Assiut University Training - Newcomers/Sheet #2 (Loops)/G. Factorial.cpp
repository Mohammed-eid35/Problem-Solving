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
    while(t--) {
        int n; cin >> n;
        long long fact = 1;
        for(int i=2; i<=n; ++i)
            fact *= i;
        cout << fact << '\n';
    }

return 0;
}
