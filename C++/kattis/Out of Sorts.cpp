//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

const int N = 1e6 + 5;
long long  n, m, a, c;
long long  ar[N];

void init() {
    for (int i = 1; i <= n; ++i) {
        ar[i] = (a * ar[i - 1] + c) % m;
    }
}

int BS(int &idx) {
    int lo = 1, hi = n, mid;
    while(lo <= hi) {
        mid = (lo + hi) >> 1;
        if (ar[mid] == ar[idx]) {
            return 1;
        }
        else if (ar[mid] < ar[idx]) {
            lo = mid + 1;
        }
        else {
            hi = mid - 1;
        }
    }
    return 0;
}

int main() {  Mo35();

    cin >> n >> m >> a >> c >> ar[0];
    init();
    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        ans += BS(i);
    }
    cout << ans;

return 0;
}
