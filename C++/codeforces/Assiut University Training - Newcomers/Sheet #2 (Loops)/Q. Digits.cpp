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
        if(!n)
            cout << n;
        while(n) {
            cout << (n % 10) << ' ';
            n /= 10;
        }
        cout << '\n';
    }

return 0;
}
