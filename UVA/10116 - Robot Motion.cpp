//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int n, m, c, steps, total;
string grid[15];
int vis[15][15];

bool valid(int x, int y) {
    return x >= 0 && y >= 0 && x < n && y < m;
}

void solve(int x, int y, int c) {
    int xx, yy;
    if(grid[x][y] == 'N') {
        xx = x - 1;
        yy = y;
    }
    else if(grid[x][y] == 'S') {
        xx = x + 1;
        yy = y;
    }
    else if(grid[x][y] == 'E') {
        xx = x;
        yy = y + 1;
    }
    else if(grid[x][y] == 'W') {
        xx = x;
        yy = y - 1;
    }

    if(valid(xx, yy)) {
        if(~vis[xx][yy]) {
            total = vis[xx][yy];
            steps = ++c;
        }
        else {
            vis[xx][yy] = ++c;
            solve(xx, yy, c);
        }
    }
    else {
        steps = ++c;
    }
}

void init() {
    memset(vis, -1, sizeof(vis));
    total = -1;
    steps = -1;
    vis[0][--c] = 0;
}

void test() {
    for(int i = 0; i < n; ++i) {
        cin >> grid[i];
    }
    init();
    solve(0, c, 0);
}

int main() {  Mo35();

    while(cin >> n >> m >> c) {
        if(n == 0 && m == 0 && c ==0) break;

        test();

        if(~total) {
            cout << total << " step(s) before a loop of " << steps - total <<" step(s)\n" ;
        }
        else {
            cout << steps << " step(s) to exit\n" ;
        }
    }

return 0;
}
