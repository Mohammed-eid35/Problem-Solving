//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Alien35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("test.in", "rt", stdin);
    freopen("test.out", "wt", stdout);
#endif
}

const int N = 1e3 + 5, OO = 0x3f3f3f3f, MOD = 100;

int main() {  Alien35();

    string s; cin >> s;
    int k; cin >> k;
    string res = "";
    int n = s.size();
    for (int i = 0; i < n; ++i) {
        while (res.size() && s[i] < res.back() && res.size() + n - i - 1>= k) res.pop_back();
        if (res.size() < k) res += s[i];
    }
    cout << res;

return 0;
}
