//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

char grid[55][55];
int n, m;

bool valid(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

void DFS(int x, int y) {
    if(!valid(x, y) || grid[x][y] == '#') return;
    grid[x][y] = 'V';

    if(valid(x + 1, y) && grid[x+1][y] == '.')
        DFS(x + 1, y);
    else if(valid(x + 1, y) && grid[x+1][y] == '#') {
        if(valid(x, y + 1) && grid[x][y+1] == '.')
            DFS(x, y+1);
        if(valid(x, y - 1) && grid[x][y-1] == '.')
            DFS(x, y-1);
    }
}

int main() {

    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; ++i)
        scanf("%s", &grid[i]);
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            if(grid[i][j] == 'V')
                DFS(i, j);
    for(int i = 0; i < n; ++i)
        printf("%s\n", grid[i]);

return 0;
}
