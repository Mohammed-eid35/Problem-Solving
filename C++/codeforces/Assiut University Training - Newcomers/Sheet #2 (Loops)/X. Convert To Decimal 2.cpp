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
        int ones = 0;
        while(n) {
            if(n % 2 != 0)
                ones++;
            n /= 2;
        }
        int ans = 0;
        for(int i=0; i<ones; ++i)
            ans += pow(2, i);
        cout << ans << '\n';
    }

return 0;
}
