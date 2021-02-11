//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

const int N = 1e5 + 5;
int n, m, ans;
bool ar[N], vis[N];
vector<vector<int>> vc(N);

void DFS(int idx, int cnt){
    vis[idx] = true;

    cnt = (ar[idx] ? cnt+1 : 0);

    if(cnt > m) return;

    for(int v : vc[idx])
        if(!vis[v])
            DFS(v, cnt);

    ans += (idx != 1 && vc[idx].size() == 1 && vis[vc[idx][0]]);
}

int main() {  Mo35();

    cin >> n >> m;
    for(int i = 1; i <= n; ++i)
        cin >> ar[i];
    int x, y;
    while(--n) {
        cin >> x >> y;
        vc[x].push_back(y);
        vc[y].push_back(x);
    }
    DFS(1, 0);
    cout << ans;

return 0;
}
