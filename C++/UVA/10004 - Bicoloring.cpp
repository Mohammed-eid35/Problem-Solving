/// Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=945
//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

const int N = 2e2 + 5;
int n, l, clr[N];
vector<vector<int>> vc;

void DFS(int x, int p) {
    if(clr[x] != -1)
        return;
    clr[x] = p;
    for(auto v : vc[x])
        if(clr[v] == -1)
            DFS(v, !p);
}

void test() {
    vc = vector<vector<int>> (n + 5);
    memset(clr, -1, sizeof(clr));
    cin >> l;
    for(int i=0, x, y; i<l; ++i) {
        cin >> x >> y;
        vc[x].push_back(y);
        vc[y].push_back(x);
    }
    for(int i=0; i<n; ++i)
        if(clr[i] == -1)
            DFS(0, 0);
    for(int i=0; i<n; ++i)
        for(auto v : vc[i])
            if(clr[i] == clr[v]) {
                cout << "NOT BICOLORABLE.\n";
                return;
            }
    cout << "BICOLORABLE.\n";
}

int main() {  Mo35();

    while(cin >> n && n) test();

return 0;
}
