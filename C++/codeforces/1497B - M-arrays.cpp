//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void test() {
    int n, m; cin >> n >> m;
    map<int, int> mp;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        mp[x % m]++;
    }
    int res = 0;
    for (auto &i : mp) {
        if (!i.first || 2 * i.first == m)
            res++;
        else if (2 * i.first < m || mp.find(m - i.first) == mp.end())
            res += 1 + max(0, abs(i.second - mp[m - i.first]) - 1);
    }
    cout << res << '\n';
}

int main() {  Mo35();

    int t; cin >> t;
    while (t--)
        test();

return 0;
}
