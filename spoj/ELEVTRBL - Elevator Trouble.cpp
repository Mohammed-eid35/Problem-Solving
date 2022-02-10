//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;
int f, s, g, u, d;
int stp[N];

int BFS() {

    memset(stp, -1, sizeof(stp));
    queue<int> qu;
    qu.push(s);
    stp[s] = 0;
    while(!qu.empty()) {
        int v = qu.front();
        if(v == g) return stp[g];
        qu.pop();
        int up = v + u, down = v - d;
        if(up <= f && stp[up] == -1) {
            stp[up] = stp[v] + 1;
            qu.push(up);
        }
        if(down > 0 && stp[down] == -1) {
            stp[down] = stp[v] + 1;
            qu.push(down);
        }
    }
    return -1;
}

int main() {

    scanf("%d %d %d %d %d", &f, &s, &g, &u, &d);
    int res = BFS();
    if(~res) printf("%d", res);
    else printf("use the stairs");

return 0;
}
