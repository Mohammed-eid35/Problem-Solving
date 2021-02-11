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

    map<int, int> mp;
    long long ans = 0;
    int n, x;
    cin >> n;
    while(n--){
        cin >> x;

        for(int i = 0; i < 32; ++i)
            ans += mp[(1 << i) - x];

        mp[x]++;
    }
    cout << ans;

return 0;
}
