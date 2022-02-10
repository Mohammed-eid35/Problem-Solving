//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

string s1, s2;
int sz1, sz2;
int mem[1005][1005];

int dp(int x, int y) {
    if(x >= sz1 && y >= sz2) return 0;

    int& ret = mem[x][y];
    if(~ret) return ret;

    if(x >= sz1) return ret = 30 + dp(x, y + 1);
    if(y >= sz2) return ret = 15 + dp(x + 1, y);

    if(s1[x] == s2[y]) return ret = dp(x + 1, y + 1);

    ret = 45 + dp(x + 1, y + 1);
    ret = min(ret, 15 + dp(x + 1, y));
    ret = min(ret, 30 + dp(x, y + 1));

    return ret;
}

void test() {
    sz1 = s1.size();
    sz2 = s2.size();
    memset(mem, -1, sizeof(mem));
    cout << dp(0, 0) << '\n';
}

int main() {  Mo35();

    while(cin >> s1) {
        if(s1[0] == '#') break;
        cin >> s2;
        test();
    }

return 0;
}
