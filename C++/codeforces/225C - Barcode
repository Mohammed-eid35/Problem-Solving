/// Link : https://codeforces.com/contest/225/problem/C
//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

const int MAXN = 1e3 + 5;
const int OO = 1e9;
int n, m, x, y;
int white[MAXN], black[MAXN], dp[MAXN][MAXN][5];

int minChange(int idx, int len, int pre) {
    if(idx == m) return ((len < x || len > y) ? OO : 0);

    int &ret = dp[idx][len][pre];
    if(~ret) return ret;
    ret = 0;

    if(!len) return ret = min(black[idx] + minChange(idx+1, 1, 1), white[idx] + minChange(idx+1, 1, 0));

    if(len < x &&  pre) return ret = black[idx] + minChange(idx+1, len+1, pre);
    if(len < x && !pre) return ret = white[idx] + minChange(idx+1, len+1, pre);

    if(len >= x && len < y &&  pre) return ret = min(black[idx] + minChange(idx+1, len+1, pre), white[idx] + minChange(idx+1, 1, !pre));
    if(len >= x && len < y && !pre) return ret = min(white[idx] + minChange(idx+1, len+1, pre), black[idx] + minChange(idx+1, 1, !pre));

    if(pre) return ret = white[idx] + minChange(idx+1, 1, !pre);
    return ret = black[idx] + minChange(idx+1, 1, !pre);
}

void test() {
    cin >> n >> m >> x >> y;
    char in;
    for(int i=0; i<n; ++i) for(int j=0; j<m; ++j) {
        cin >> in;
        if(in == '.') white[j]++; else black[j]++;
    }
    memset(dp, -1, sizeof(dp));
    cout << minChange(0, 0, 'M');
}

int main() {  Mo35();

    int cases = 1; // cin >> cases;
    while(cases--) {
        test();
    }

return 0;
}
