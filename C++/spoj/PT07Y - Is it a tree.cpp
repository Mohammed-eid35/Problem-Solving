/// Link : https://www.spoj.com/problems/PT07Y/

//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

const int N = 1e4 + 5, M = 2e4 + 5;
int n, m;
vector<vector<int>> vc;
bool vis[N];
string ans = "YES";

void DFS(int x, int p = 0) {
    if(vis[x]) {
        ans = "NO";
        return;
    }

    vis[x] = true;

    for(auto v : vc[x]) if(v != p) {
        DFS(v, x);
    }
}

int main() {  Mo35();

    cin >> n >> m;
    vc = vector<vector<int>>(n+5);
    for(int i=0, x, y; i<m; ++i) {
        cin >> x >> y;
        vc[x].push_back(y);
        vc[y].push_back(x);
    }
    DFS(1);
    for(int i=1; i<=n; ++i) if(!vis[i]) {
        ans = "NO";
    }
    cout << ans;

return 0;
}
