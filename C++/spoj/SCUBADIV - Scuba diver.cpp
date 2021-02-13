//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int n, t, a, tw;
int W[1005], N[1005], O[1005], mem[1005][25][85];

int dp(int idx, int remO, int remN) {
    if(idx == n) return (remO > 0 || remN > 0 ? (int)2e9 : 0);

    remO = (remO < 0 ? 0 : remO);
    remN = (remN < 0 ? 0 : remN);

    int& ret = mem[idx][remO][remN];
    if(~ret) return ret;

    ret = dp(idx + 1, remO, remN);
    return ret = min(ret, W[idx] + dp(idx + 1, remO - O[idx], remN - N[idx]));
}

void test() {
    tw = 0;
    cin >> t >> a >> n;
    for(int i = 0; i < n; ++i) {
        cin >> O[i] >> N[i] >> W[i];
        tw += W[i];
    }
    memset(mem, -1, sizeof(mem));
    cout << dp(0, t, a) << '\n';
}

int main() {  Mo35();

    int t; cin >> t;
    while(t--) test();

return 0;
}
