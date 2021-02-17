//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

int n, m;
char grid[105][105];
int dx[]= {0,  0, 1, -1, 1, -1, -1,  1};
int dy[]= {1, -1, 0,  0, 1,  1, -1, -1};

bool valid(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

void DFS(int x, int y) {
    grid[x][y] = '*';

    for(int i = 0; i < 8; ++i) {
        int xx = x + dx[i];
        int yy = y + dy[i];

        if(valid(xx, yy) && grid[xx][yy] == '@')
            DFS(xx, yy);
    }
}

void test() {
    for(int i = 0; i < n; ++i)
        scanf("%s", &grid[i]);
    int res = 0;
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            if(grid[i][j] == '@') {
                res++;
                DFS(i, j);
            }
    printf("%d\n", res);
}

int main() {

    while(scanf("%d %d", &n, &m)) {
        if(n == 0 && m == 0) break;
        test();
    }

return 0;
}
