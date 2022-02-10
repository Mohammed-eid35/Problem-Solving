//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

typedef vector<int> vi;
int n;
int ar[205], mem[205][205];
map<int, vi> mp;
vector<vi> vc;

int dp(int idx, int pre) {
    if(idx == n) return 0;

    int& ret = mem[idx][pre];
    if(~ret) return ret;

    ret = dp(idx + 1, pre);
    if(idx == pre || ar[idx] > ar[pre])
        ret = max(ret, 1 + dp(idx + 1, idx));

    return ret;
}

void getPath(int idx, int pre, int& i) {
    if(idx == n) return;

    int& ret = mem[idx][pre];

    if(ret == dp(idx + 1, pre))
        getPath(idx + 1, pre, i);
    else {
        vc[i].push_back(ar[idx]);
        getPath(idx + 1, idx, i);
    }
}

void test() {
    for(int i = 0; i < n; ++i)
        cin >> ar[i];
    memset(mem, -1, sizeof(mem));
    mp.clear();
    int mxv = -1, mxi = -1, ret;
    for(int i = 0; i < n; ++i) {
        ret = dp(i, i);
        if(ret > mxv) {
            mxv = ret;
            mxi = i;
        }
        mp[ret].push_back(i);
    }
    int sz = mp[mem[mxi][mxi]].size();
    vc = vector<vi> (sz);
    for(int i = 0; i < sz; ++i) {
        int idx = mp[mem[mxi][mxi]][i];
        getPath(idx, idx, i);
    }
    cout << mxv;
    sort(vc.begin(), vc.end());
    for(auto v : vc[0])
        cout << ' ' << v;
    cout << '\n';
}

int main() {  Mo35();

    while(cin >> n && n) test();

return 0;
}
