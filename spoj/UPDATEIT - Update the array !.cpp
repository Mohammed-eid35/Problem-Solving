//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "rt", stdin);
    //freopen("output.txt", "wt", stdout);
#endif
}

const int N = 1e4 + 5;
int ar[N];

void test() {
    int n, u, l, r, val;
    cin >> n >> u;
    memset(ar, 0, n * sizeof(ar[0]));
    while (u--) {
        cin >> l >> r >> val;
        ar[l] += val;
        ar[r+1] -= val;
    }
    for (int i = 1; i < n; ++i)
        ar[i] += ar[i-1];
    int q, idx;
    cin >> q;
    while (q--) {
        cin >> idx;
        cout << ar[idx] << '\n';
    }
}

int main() {  Mo35();

    int t;
    cin >> t;
    while (t--)
        test();

return 0;
}
