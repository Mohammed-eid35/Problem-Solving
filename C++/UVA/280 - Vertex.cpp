//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

const int N = 1e5 + 5, M = N << 1;
int n, ne, vid;
int head[N], nxt[M], to[M], vis[N];

void print() {
    int cnt = 0;
    for(int i = 0; i < n; ++i) if(vis[i] != vid) {
        cnt++;
    }
    cout << cnt;
    for(int i = 0; i < n; ++i) if(vis[i] != vid) {
        cout << ' ' << i+1;
    }
    cout << '\n';
}

void DFS(int u) {

    for(int e = head[u]; ~e; e = nxt[e]) {
        int v = to[e];
        if(vis[v] != vid) {
            vis[v] = vid;
            DFS(v);
        }
    }
}

void addEdge(int f, int t) {
    to[ne] = t;
    nxt[ne] = head[f];
    head[f] = ne++;
}

void init() {
    memset(head, -1, sizeof(head));
    ne = 0;
}

int main() {  Mo35();

    while(cin >> n && n) {
        init();

        int u;
        while(cin >> u && u) {
            int v;
            while(cin >> v && v) {
                addEdge(u - 1, v - 1);
            }
        }

        int t; cin >> t;
        while(t--) {
            int u; cin >> u;
            vid++;
            DFS(u - 1);
            print();
        }
    }

return 0;
}
