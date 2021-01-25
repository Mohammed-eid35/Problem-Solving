/// Link : https://atcoder.jp/contests/dp/tasks/dp_b
//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> PR;
#define F first
#define S second
#define PB push_back
#define MAXN (int)(1e5)+5

int n, k;
int h[MAXN], dp[MAXN];

void Mo35(){ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);}
int dp_fun(int indx){
    if(indx == n)
        return 0;

    if(dp[indx] != -1)
        return dp[indx];

    int mn = 1e9;
    for(int i=1; i<=k; ++i){
        if(indx+i <= n)
            mn = min(mn, abs(h[indx]-h[indx+i]) + dp_fun(indx+i));
    }
    return dp[indx] = mn;
}

int main() { Mo35();

    cin >> n >> k;
    for(int i=1; i<=n; ++i)
        cin >> h[i];
    memset(dp, -1, sizeof(dp));
    cout << dp_fun(1);

return 0;
}
