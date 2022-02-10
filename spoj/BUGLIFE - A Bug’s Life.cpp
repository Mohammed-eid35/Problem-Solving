/// Link : https://www.spoj.com/problems/BUGLIFE/
//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

const int N = 2e3 + 5;
int n, in, s[N];
vector<vector<int>> vc;

void DFS(int x, int p) {
    if(s[x] != -1)
        return;
    s[x] = !p;

    for(auto v : vc[x])
        if(s[v] == -1)
            DFS(v, s[x]);
}

string test() {
    cin >> n >> in;
    vc = vector<vector<int>> (n + 5);
    for(int i=0, x, y; i<in; ++i) {
        cin >> x >> y;
        vc[x].push_back(y);
        vc[y].push_back(x);
    }
    memset(s, -1, sizeof(s));
    for(int i=1; i<=n; ++i)
        if(s[i] == -1)
            DFS(i, 1);
    for(int i=1; i<=n; ++i)
        for(auto v : vc[i])
            if(s[i] == s[v])
                return "Suspicious bugs found!";
    return "No suspicious bugs found!";
}

int main() {  Mo35();

    int t; cin >> t;
    for(int i=1; i<=t; ++i)
        cout << "Scenario #" << i << ":\n" << test() << '\n';

return 0;
}
