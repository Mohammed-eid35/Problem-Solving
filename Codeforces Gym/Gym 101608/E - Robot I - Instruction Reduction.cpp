//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Alien35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("test.in", "rt", stdin);
    freopen("test.out", "wt", stdout);
#endif
}

const int N = 20 + 5, M = 1e4 + 5, OO = 0x3f3f3f3f, MOD = 1e9 + 7;
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

vector<string> vc;

vector<int> fun(int x, int y,int dir) {
    while (true) {
        int i = x + dx[dir];
        int j = y + dy[dir];
        if (vc[i][j] == '#') dir = (dir + 1) % 4;
        else return {i, j, dir};
    }
}

int getDir(char c) {
    if (c == 'U') return 0;
    if (c == 'R') return 1;
    if (c == 'D') return 2;
    return 3;
}

bool isValid(vector<int> a, vector<int> b) {
    return a[0] == b[0] && a[1] == b[1];
}

void test() {
    int n, m, q; cin >> n >> m >> q;
    pair<int, int> st;
    char D;
    int dir;
    cin >> st.first >> st.second >> D;
    st.first--, st.second--;
    dir = getDir(D);
    vc = vector<string> (n);
    for (int i = 0; i < n; ++i) cin >> vc[i];
    int cntR = 0, steps = 0;
    while (q--) {
        char ch; cin >> ch;
        if (ch == 'R') cntR = (cntR + 1) % 4;
        else {
            if (isValid(fun(st.first, st.second, dir), fun(st.first, st.second, (dir + cntR) % 4))) {
                steps = max(steps, 1);
            }
            else {
               int tmpD = dir;
               while (!isValid(fun(st.first, st.second, dir), fun(st.first, st.second, (tmpD + cntR) % 4))) {
                   dir = (dir + 1) % 4;
                   steps++;
               }
               steps++;
            }
            int x; cin >> x;
            while (x--) {
                auto ret = fun(st.first, st.second, dir);
                st = {ret[0], ret[1]};
                dir = ret[2];
            }
            cntR = 0;
        }
    }
    cout << steps << '\n';
}

int main() {  Alien35();
    freopen("reduce.in", "r", stdin);
    
    int t; cin >> t;
    while (t--) {
        test();
    }

return 0;
}