#include <bits/stdc++.h>
using namespace std;

const int N = 5e3 + 5;

int freq[N];

void test() {
    int n; cin >> n;
    vector<int> arr(n), sorted(n);
    for (int i = 0; i < n; i++) cin >> arr[i], sorted[i] = arr[i];
    sort(sorted.begin(), sorted.end());
    int sz = unique(sorted.begin(), sorted.end()) - sorted.begin();
    for (int i = 0; i < n; i++) {
        arr[i] = lower_bound(sorted.begin(), sorted.begin() + sz, arr[i]) - sorted.begin();
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        memset(freq, 0, sizeof freq);
        int odd = 0;
        for (int j = i; j < n; j++) {
            freq[arr[j]]++;
            if (freq[arr[j]] % 2 == 1) odd++;
            else odd--;
            if (odd == 1) ans++;
        }
    }
    cout << ans << '\n';
}

int main () {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("cases.in", "r", stdin);

    int t; cin >> t;
    while (t--) test();

    return 0;
}