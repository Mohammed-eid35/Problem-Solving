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

    int a, b, c, d; cin >> a >> b >> c >> d;
    int ans = ((a % 100) * (b % 100) * (c % 100) * (d % 100)) % 100;
    if(ans < 10) cout << '0' << ans;
    else cout << ans;

return 0;
}
