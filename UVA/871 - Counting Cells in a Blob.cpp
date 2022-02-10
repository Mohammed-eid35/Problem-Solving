/// Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=812
//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int n, m, cnt;
string grid[30];
bool vis[30][30];
int dx[]= {0, 0,1,-1,1,-1,-1, 1};
int dy[]= {1,-1,0, 0,1, 1,-1,-1};

bool valid(int x, int y) {
    return(x >= 0 && y >= 0 && x < n && y < m && grid[x][y] == '1');
}

void DFS(int x, int y) {
    if(vis[x][y])
        return;
    cnt++;
    vis[x][y] = true;
    for(int i=0; i<8; ++i) {
        int xx = x + dx[i];
        int yy = y + dy[i];

        if(valid(xx, yy))
            DFS(xx, yy);
    }
}

void test() {
    for(n = 0; getline(cin, grid[n]) && grid[n] != ""; ++n);
    m = grid[0].size();
    memset(vis, false, sizeof(vis));
    int ans = -1;
    for(int i=0; i<n; ++i)
        for(int j=0; j<m; ++j) {
            cnt = 0;
            if(grid[i][j] == '1')
                DFS(i, j);
            ans = max(ans, cnt);
        }
    cout << ans << '\n';
}

int main() {  Mo35();

    string blankLine;
    int t; cin >> t;
    getline(cin, blankLine);
    getline(cin, blankLine);
    for(int i=0; i<t; ++i) {
        if(i)
            cout << '\n';
        test();
    }

return 0;
}
