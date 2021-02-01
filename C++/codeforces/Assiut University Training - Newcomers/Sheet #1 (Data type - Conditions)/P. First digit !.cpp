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
    int ans;
    while(n) {
        ans = n % 10;
        n /= 10;
    }
    cout << (ans % 2 == 0 ? "EVEN" : "ODD");

return 0;
}
