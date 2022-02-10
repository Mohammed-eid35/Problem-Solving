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

    int n, k;
    cin >> n >> k;
    map<int, bool> mp;
    for (int i = 0; i < k; ++i) {
        int x;
        cin >> x;
        mp[x] = true;
    }
    for (int i = n; i < (int)1e7; ++i) {
        string x = to_string(i);
        bool f = true;
        for (auto &c : x) {
            if (mp[c - '0']) {
                f = false;
                break;
            }
        }
        if (f) {
            cout << x;
            break;
        }
    }

return 0;
}
