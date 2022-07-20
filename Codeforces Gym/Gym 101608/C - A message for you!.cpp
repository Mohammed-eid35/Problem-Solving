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

const int N = 20 + 5, M = 1e4 + 5, OO = 0x3f3f3f3f, MOD = 1e9 + 7;

void test() {
    int n; cin >> n;
    map<char, bool> mp;
    for (int i = 0; i < n; ++i) {
        char c; cin >> c;
        mp[c] = true;
    }
    priority_queue<pair<int, char>> pq;
    for (int i = 0; i < 13; ++i) {
        int x; cin >> x;
        if (!mp[(i + 'A')]) pq.push({x, i + 'A'});
    }
    cout << pq.top().second << '\n';
}

int main() {  Alien35();
    freopen("scoreboard.in", "rt", stdin);

    int t; cin >> t;
    while (t--) {
        test();
    }  

return 0;
}