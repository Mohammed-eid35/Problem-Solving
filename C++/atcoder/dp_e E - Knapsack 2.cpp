/// Link : https://atcoder.jp/contests/dp/tasks/dp_e
//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

typedef long long LL;

const int MAXN = 1e5 + 5, OO = 1e9;
LL n, w;
LL arW[MAXN], arV[MAXN], dp[105][MAXN];

LL dp_fun(LL indx, LL val){
    if(indx == n) return (val ? OO : val);
    LL &ret = dp[indx][val];
    if(~ret) return ret;
    ret = dp_fun(indx+1, val);
    if(arV[indx] <= val) ret = min(ret, arW[indx]+dp_fun(indx+1, val-arV[indx]));
    return ret;
}

int main(){ Mo35();

    cin >> n >> w;
    memset(dp, -1, sizeof(dp));
    LL max_val = 0;
    for(int i=0; i<n; ++i){
        cin >> arW[i] >> arV[i];
        max_val += arV[i];
    }
    for(;max_val; --max_val) if(dp_fun(0, max_val) <= w) break;
    cout << max_val;

return 0;
}
