//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int n;
string s;
int mem[5005][5005];

int dp(int x, int y) {
    if(x == y || x > y) return 0;

    int& ret = mem[x][y];
    if(~ret) return ret;

    if(s[x] == s[y]) return ret = dp(x + 1, y - 1);

    return ret = 1 + min(dp(x + 1, y), dp(x, y - 1));
}

int main() {  Mo35();

    cin >> n >> s;
    memset(mem, -1, sizeof(mem));
    cout << dp(0, n-1);

return 0;
}
