//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

struct Edge {
    int to;
    int nxt;
    int color;
};

const int N = 1e2 + 5, M = N << 1;
int n, m, ne, vid, head[N], vis[N];
Edge edges[M];

bool DFS(int u, int v, int c) {
    vis[u] = vid;
    if(u == v) return true;
    for(int e = head[u]; e != -1; e = edges[e].nxt) {
        int color = edges[e].color, to = edges[e].to;
        if(vis[to] != vid && color == c && DFS(to, v, c))
            return true;
    }
    return false;
}

void addEdge(int f, int t, int c) {
    edges[ne].to = t;
    edges[ne].nxt = head[f];
    edges[ne].color = c;
    head[f] = ne++;
}

void addBiEdge(int u, int v, int c) {
    addEdge(u, v, c);
    addEdge(v, u, c);
}

void init(){
    memset(head, -1, sizeof(head));
    ne = 0;
}

int main() {

    scanf("%d %d", &n, &m);
    init();
    for(int i = 0; i < m; ++i) {
        int u, v, c; scanf("%d %d %d", &u, &v, &c);
        addBiEdge(u - 1, v - 1, c - 1);
    }
    int q; scanf("%d", &q);
    while(q--) {
        int u, v; scanf("%d %d", &u, &v);
        int res = 0;
        for(int i = 0; i < 100; ++i) {
            vid++;
            if(DFS(u - 1, v - 1, i)) res++;
        }
        printf("%d\n", res);
    }

return 0;
}
