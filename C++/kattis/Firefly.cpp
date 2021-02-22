//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

const int N = 5e5 + 5, OO = 0x3f3f3f;
int ar1[N], ar2[N];

int main() {  Mo35();

    int n, h; cin >> n >> h;
    for (int i = 0; i < n; ++i) {
        int in; cin >> in;
        if(i & 1)
            ar1[h - in]++;
        else
            ar2[in - 1]++;
    }
    for (int i = 1; i < h; ++i) {
        ar1[i] += ar1[i - 1];
    }
    for (int i = h - 2; i >= 0; --i) {
        ar2[i] += ar2[i + 1];
    }
    int mn = OO, cnt = 0;
    for (int i = 0; i < h; ++i) {
        if (ar1[i] + ar2[i] < mn) {
            mn = ar1[i] + ar2[i];
            cnt = 0;
        }
        cnt += (ar1[i] + ar2[i] == mn);
    }
    cout << mn << ' ' << cnt;

return 0;
}
