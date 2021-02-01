/// Link : https://codeforces.com/problemset/problem/103/B
//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

const int N = 1e2 + 5;
int n, m;
vector<vector<int>> vc;
bool vis[N];

void DFS(int x) {
    if(vis[x])
        return;
    vis[x] = true;
    for(auto v : vc[x]) if(!vis[v]) {
        DFS(v);
    }
}

int main() {  Mo35();

    cin >> n >> m;
    vc = vector<vector<int>>(n + 5);
    for(int i=0, x, y; i<m; ++i) {
        cin >> x >> y;
        vc[x].push_back(y);
        vc[y].push_back(x);
    }
    DFS(1);
    bool f = true;
    for(int i=1; i<=n; ++i)
        if(!vis[i])
            f = false;
    if(n == m && f)
        cout << "FHTAGN!";
    else
        cout << "NO";

return 0;
}
