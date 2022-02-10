//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

struct Edge { int nxt, to, idx; };
const int N = 3e5 + 5, M = N << 1;
int head[N], ne;
Edge edges[M];
bool vis[N], visi[N];
queue<int> qu;

void BFS() {
    while(!qu.empty()) {
        int u = qu.front();
        qu.pop();
        for(int e = head[u]; ~e ; e = edges[e].nxt) {
            int v = edges[e].to;
            if(vis[v]) continue;

            vis[v] = true;
            qu.push(v);
            visi[edges[e].idx] = true;
        }
    }
}

void addEdge(int f, int t, int idx) {
    edges[ne].to = t;
    edges[ne].nxt = head[f];
    edges[ne].idx = idx;
    head[f] = ne++;
}

void addBiEdge(int u, int v, int idx) {
    addEdge(u, v, idx);
    addEdge(v, u, idx);
}

void init() {
    memset(head, -1, sizeof(head));
    ne = 0;
}

int main() {  Mo35();

    int n, k, d; cin >> n >> k >> d;
    for(int i = 0; i < k; ++i) {
        int p; cin >> p;
        qu.push(p);
        vis[p] = true;
    }
    init();
    for(int i = 1; i < n; ++i) {
        int u, v; cin >> u >> v;
        addBiEdge(u, v, i);
    }
    BFS();
    vector<int> vc;
    for(int i = 1; i < n; ++i) if(!visi[i]) {
        vc.push_back(i);
    }
    cout << vc.size() << '\n';
    for(auto v : vc) {
        cout << v << ' ';
    }

return 0;
}
