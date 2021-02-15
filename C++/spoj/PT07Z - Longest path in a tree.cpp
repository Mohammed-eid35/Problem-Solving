//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

const int N = 1e4 + 5, M = N << 1;
int n, ne, vid, mxv, mxi;
int head[N], to[M], nxt[M], vis[N];

void DFS(int u, int d) {
    if(vis[u] == vid) return;
    vis[u] = vid;
    if(mxv < d) {
        mxv = d;
        mxi = u;
    }
    for(int e = head[u]; e != -1; e = nxt[e]) {
        int v = to[e];
        DFS(v, 1 + d);
    }
}

void addEdge(int f, int t) {
    to[ne] = t;
    nxt[ne] = head[f];
    head[f] = ne++;
}

void addBiEdge(int u, int v) {
    addEdge(u, v);
    addEdge(v, u);
}

void init() {
    memset(head, -1, sizeof(head));
    vid++;
    ne = 0;
}

int main() {

    scanf("%d", &n);
    init();
    for(int i = 1; i < n; ++i) {
        int u, v;
        scanf("%d %d", &u, &v);
        addBiEdge(u - 1, v - 1);
    }
    mxv = -1; DFS(0, 0);
    vid++;
    mxv = -1; DFS(mxi, 0);
    printf("%d", mxv);

return 0;
}
