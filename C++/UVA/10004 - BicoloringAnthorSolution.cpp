//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

const int N = 2e2 + 5, M = N << 1;
int n, l, ne;
int head[N], to[M], nxt[M], clr[N];

void addEdg(int f, int t) {
    to[ne] = t;
    nxt[ne] = head[f];
    head[f] = ne++;
}

void addBiEdge(int u, int v) {
    addEdg(u, v);
    addEdg(v, u);
}

void init() {
    memset(head, -1, n * sizeof(head[0]));
    memset(clr, -1, n * sizeof(clr[0]));
    ne = 0;
}

bool DFS(int u, int c) {
    if(~clr[u]) return (clr[u] == c);
    clr[u] = c;

    int ret = true;
    for(int e = head[u]; ~e; e = nxt[e]) {
        int v = to[e];
        ret &= DFS(v, !c);
    }

    return ret;
}

void test() {
    init();
    scanf("%d", &l);
    for(int i = 0; i < l; ++i) {
        int u, v; scanf("%d %d", &u, &v);
        addBiEdge(u, v);
    }
    puts(DFS(0, 0) ? "BICOLORABLE." : "NOT BICOLORABLE.");
}

int main() {

    while(scanf("%d", &n) && n) test();

return 0;
}
