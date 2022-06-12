/// Link : https://atcoder.jp/contests/dp/tasks/dp_a
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

int n;
int h[MAXN], dp[MAXN];

void Mo35(){ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);}

int dp_fun(int i){
    if(i >= n)
        return 0;

    if(dp[i] != -1)
        return dp[i];

    if(i+1 == n)
        return dp[i] = abs(h[i]-h[i+1]);

    return dp[i] = min(abs(h[i]-h[i+1])+dp_fun(i+1), abs(h[i]-h[i+2])+dp_fun(i+2));

}

int main() {
Mo35();

    memset(dp, -1, sizeof(dp)); cin >> n;
    for(int i=1; i<=n; ++i)
        cin >> h[i];
    cout << dp_fun(1);

return 0;
}
