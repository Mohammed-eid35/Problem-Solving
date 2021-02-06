/// Link : https://codeforces.com/problemset/problem/935/A
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
    int ans = 0;
    for(int i=1; i<n; ++i)
        if((n - i) % i == 0)
            ans++;
    cout << ans;

return 0;
}
