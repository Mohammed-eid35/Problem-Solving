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
int n, ne, s, fnsh, len;
int head[N], lens[N], nxt[M], to[M];

void BFS() {
    memset(lens, -1, sizeof(lens));

    queue<int> qu;
    qu.push(s);
    lens[s] = 0;

    while(!qu.empty()) {
        int u = qu.front();
        qu.pop();

        for(int e = head[u]; ~e; e = nxt[e]) {
            int v = to[e];
            if(lens[u] + 1 > lens[v]) {
                qu.push(v);
                lens[v] = lens[u] + 1;

                if(lens[v] > len || (lens[v] == len && v < fnsh)) {
                    len = lens[v];
                    fnsh = v;
                }
            }
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
    fnsh = s;
    len = 0;
}

int main() {  Mo35();

    int caseNO = 0;
    while(cin >> n && n) {
        cin >> s;
        init();

        int u, v;
        while(cin >> u >> v && (u + v)) {
            addEdge(u, v);
        }
        BFS();
        cout <<"Case "<< ++caseNO << ": The longest path from "<< s << " has length " << len << ", finishing at "<< fnsh << ".\n\n";
    }

return 0;
}
