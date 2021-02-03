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

    int k, s; cin >> k >> s;
    int ans = 0;
    for(int x=0; x<=k; ++x)
        for(int y=0; y<=k; ++y) {
            int z = s - x - y;
            if(z >= 0 && z <= k)
                ans++;
        }
    cout << ans;

return 0;
}
