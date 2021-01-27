/// Link : https://atcoder.jp/contests/dp/tasks/dp_c
//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

const int MAXN = 1e5 + 5;
int n;
int a[MAXN], b[MAXN], c[MAXN];
int dp[MAXN][5];
int max_happiness(int indx, int pre){
    if(indx == n)
        return 0;
    int &ret = dp[indx][pre];
    if(~ret) return dp[indx][pre];
    if(pre == 1)
        return ret = max(b[indx]+max_happiness(indx+1, 2), c[indx]+max_happiness(indx+1, 3));
    if(pre == 2)
        return ret = max(a[indx]+max_happiness(indx+1, 1), c[indx]+max_happiness(indx+1, 3));
    if(pre == 3)
        return ret = max(b[indx]+max_happiness(indx+1, 2), a[indx]+max_happiness(indx+1, 1));
    return ret = max({a[indx]+max_happiness(indx+1, 1), b[indx]+max_happiness(indx+1, 2), c[indx]+max_happiness(indx+1, 3)});
}

int main(){ Mo35();

    cin >> n;
    for(int i=0; i<n; ++i)
        cin >> a[i] >> b[i] >> c[i];
    memset(dp, -1, sizeof(dp));
    cout << max_happiness(0, 0);

return 0;
}
