//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

const int N = 1e2 + 5;
int n, szs;
char grid[N][N];
const string s = "ICPCASIASG";
int dx[] = { 1,  2, 2, 1, -1, -2, -2, -1};
int dy[] = {-2, -1, 1, 2,  2,  1, -1, -2};

bool valid(int x, int y) {
    return (min(x, y) >= 0 && max(x, y) < n);
}

bool DFS(int x, int y, int pos) {
    if(pos == szs) return true;

    for(int i = 0; i < 8; ++i) {
        int xx = x + dx[i];
        int yy = y + dy[i];

        if(valid(xx, yy) && grid[xx][yy] == s[pos] && DFS(xx, yy, pos + 1))
            return true;
    }

    return false;
}

int main() {

    scanf("%d", &n);
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j)
            scanf(" %c", &grid[i][j]);
    szs = s.size();
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j)
            if(DFS(i, j, 0))
                return puts("YES"), 0;
    puts("NO");

return 0;
}
