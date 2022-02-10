//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

const int N = 1e4 + 5;
int H[N], C[N];

long long cost(int n, int h) {
    long long cst = 0;
    for (int i = 0; i < n; ++i) {
        cst += C[i] * abs(H[i] - h);
    }
    return cst;
}

long long minimumCost() {
    int n; cin >> n;
    int mx = -1, mn = 2e9;
    for (int i = 0; i < n; ++i) {
        cin >> H[i];
        mn = min(mn, H[i]);
        mx = max(mx, H[i]);
    }
    for (int i = 0; i < n; ++i) {
        cin >> C[i];
    }
    long long minCost = 1e18;
    for (int i = mn; i <= mx; ++i) {
        minCost = min(minCost, cost(n, i));
    }
    return minCost;
}

int main() {  Mo35();

    int t; cin >> t;
    while (t--) {
        cout << minimumCost() << '\n';
    }

return 0;
}
