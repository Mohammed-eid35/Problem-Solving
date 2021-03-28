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

    int cnt = 0, x;
    for (int i = 0; i < 3; ++i) {
        cin >> x;
        if (x == 7)
            cnt++;
    }
    cout << (cnt == 1 ? "YES" : "NO");

return 0;
}
