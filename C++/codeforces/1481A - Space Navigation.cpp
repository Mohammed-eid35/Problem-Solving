/// Link : https://codeforces.com/contest/1481/problem/A
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
    int x, y; cin >> x >> y;
    string s; cin >> s;
    int sz = s.size();
    for(int i = 0; i < sz; ++i) {
        if(s[i] == 'R' && x > 0)
            x--;
        if(s[i] == 'L' && x < 0)
            x++;
        if(s[i] == 'U' && y > 0)
            y--;
        if(s[i] == 'D' && y < 0)
            y++;
    }
    cout << (x == 0 && y == 0 ? "YES\n" : "NO\n");
}

int main() {  Mo35();

    int t; cin >> t;
    while(t--)
        test();

return 0;
}
