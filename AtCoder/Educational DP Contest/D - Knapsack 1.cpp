/// Link : https://atcoder.jp/contests/dp/tasks/dp_d
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

const int MAXN = 1e5 + 5;
int n, w;
int wts[105], vals[105];
LL dp[105][MAXN];

LL max_val(int indx, int weight){
    if(indx == n) return 0;
    LL &ret = dp[indx][weight];
    if(~ret) return ret;
    if(weight+wts[indx] > w) return ret = max_val(indx+1, weight);
    return ret = max(vals[indx]+max_val(indx+1, weight+wts[indx]), max_val(indx+1, weight));
}

int main(){ Mo35();

    cin >> n >> w;
    for(int i=0; i<n; ++i)
        cin >> wts[i] >> vals[i];
    memset(dp, -1, sizeof(dp));
    cout << max_val(0, 0);

return 0;
}
