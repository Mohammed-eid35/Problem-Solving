//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int k, m;
int A[55], B[55], mem[55][1005];

int dp(int idx, int rem) {
    if(idx == m) return 0;

    int& ret = mem[idx][rem];
    if(~ret) return ret;

    ret = dp(idx + 1, rem);
    if(rem >= A[idx]) ret = max(ret, B[idx] + dp(idx + 1, rem - A[idx]));

    return ret;
}

void test() {
    cin >> k >> m;
    for(int i = 0; i < m; ++i)
        cin >> A[i] >> B[i];
    memset(mem, -1, sizeof(mem));
    cout << "Hey stupid robber, you can get " << dp(0, k) << ".\n";
}

int main() {  Mo35();

    int t; cin >> t;
    while(t--) test();

return 0;
}
