/// Link : https://atcoder.jp/contests/dp/tasks/dp_h
//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}


const int N = 1e3 + 5;
const int MOD = 1e9 + 7;
int h, w;
char grid[N][N];
int dp[N][N];

int pathsNum(int x, int y) {
    if(x == h - 1 && y == w - 1) return 1;
    if(x >= h || y >= w) return 0;
    if(grid[x][y] == '#') return 0;
    int &ret = dp[x][y];
    if(~ret) return ret;
    return ret = (pathsNum(x+1, y) + pathsNum(x, y+1)) % MOD;
}

void test() {
    cin >> h >> w; memset(dp, -1, sizeof(dp));
    for(int i = 0; i < h; ++i) cin >> grid[i];
    int ans = pathsNum(0 ,0);
    cout << (ans == -1 ? 0 : ans);
}

int main() { Mo35();

    int cases = 1;
    while(cases--) {
        test();
    }

return 0;
}
