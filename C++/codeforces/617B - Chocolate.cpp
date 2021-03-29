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

    int n, x, pre = -1;
    cin >> n;
    long long ans = 1;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        if (x == 1) {
            if (pre != -1)
                ans *= (i - pre);
            pre = i;
        }
    }
    cout << (pre == -1 ? 0 : ans);

return 0;
}
