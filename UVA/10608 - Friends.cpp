/// Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1549

//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

const int N = 3e4 + 5, M = 5e5 + 5;
int n, m;
vector<vector<int>> friends;
bool vis[N];
int c;

void DFS(int x) {
    if(vis[x]) return;

    vis[x] = true;
    c++;

    for(auto f : friends[x]) if(!vis[f]) {
        DFS(f);
    }
}


void test() {
    cin >> n >> m;
    int x, y; friends = vector<vector<int>>(n+5);
    for(int i=0; i<m; ++i) {
        cin >> x >> y;
        friends[x].push_back(y);
        friends[y].push_back(x);
    }
    memset(vis, false, sizeof(vis));
    int ans = (1e9) * -1;
    for(int i=1; i<=n; ++i) if(!vis[i]) {
        c = 0;
        DFS(i);
        ans = max(ans, c);
    }
    cout << ans << '\n';
}

int main() {  Mo35();

    int t; cin >> t;
    while(t--) test();

return 0;
}
