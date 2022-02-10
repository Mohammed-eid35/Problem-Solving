/// Link : https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=931
//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

long long t, w, n, d[35], v[35], dp[35][1005];
vector<int> path;

long long maxGold(long long idx, long long rem) {
    if(idx == n) return 0;

    long long& ret = dp[idx][rem];
    if(~ret) return ret;

    ret = maxGold(idx+1, rem);
    if(rem >= 3*w*d[idx]) ret = max(ret, v[idx]+maxGold(idx+1, rem - 3*w*d[idx]));

    return ret;
}

void getPath(long long idx, long long rem) {
    if(idx == n) return;

    long long& ret = dp[idx][rem];
    if(ret == maxGold(idx+1, rem)) getPath(idx+1, rem);
    else {
        path.push_back(idx);
        getPath(idx+1, rem-3*w*d[idx]);
    }
}

void test() {
    cin >> n;
    for(int i=0; i<n; ++i) cin >> d[i] >> v[i];
    cout << maxGold(0, t) << '\n';
    getPath(0, t);
    cout << path.size() << '\n';
    for(auto i : path) cout << d[i] << ' ' << v[i] << '\n';
}

int main() { Mo35();

    bool firstCase = true;
    while(cin >> t >> w) {
        if(!firstCase) cout << '\n';
        firstCase = false;
        memset(dp, -1, sizeof(dp));
        path.clear();
        test();
    }

return 0;
}
