/// Link : https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=3104
//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("input.txt", "rt", stdin);
}

const int N = 1e2 + 5;
int n;
string grid[N];
bool vis[N][N];
int dx[]= {0, 0,1,-1,1,-1,-1, 1};
int dy[]= {1,-1,0, 0,1, 1,-1,-1};

bool valid(int x, int y) { return (min(x, y) >= 0 && max(x, y) < n); }

void DFS(int x, int y) {
    if(vis[x][y])
        return;
    vis[x][y] = true;
    for(int i=0; i<8; ++i) {
        int xx = x + dx[i];
        int yy = y + dy[i];

        if(valid(xx, yy) && grid[xx][yy] != '.')
            DFS(xx, yy);
    }
}

int test() {
    cin >> n;
    for(int i=0; i<n; ++i)
        cin >> grid[i];
    memset(vis, false, sizeof(vis));
    int ans = 0;
    for(int i=0; i<n; ++i)
        for(int j=0; j<n; ++j)
            if(!vis[i][j] && grid[i][j] == 'x') {
                ans++;
                DFS(i, j);
            }
    return ans;
}

int main() {  Mo35();

    int t; cin >> t;
    for(int i=1; i<=t; ++i)
        cout << "Case " << i << ": " << test() << '\n';

return 0;
}
