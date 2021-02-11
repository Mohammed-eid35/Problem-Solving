//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

const int N = 2e5 + 5;
int ar[N];

int main() {  Mo35();

    int n; cin >> n;
    for(int i = 0; i < n; ++i)
        cin >> ar[i];
    set<int> st[5];
    for(int i = 0, x; i < n; ++i) {
        cin >> x;
        st[x].insert(ar[i]);
    }
    for(int i = 0, x; i < n; ++i) {
        cin >> x;
        st[x].insert(ar[i]);
    }
    int m; cin >> m;
    for(int i = 0, x; i < m; ++i) {
        cin >> x;
        if(st[x].empty()) {
            cout << "-1 ";
            continue;
        }
        x = *st[x].begin();
        cout << x << ' ';
        st[1].erase(x);
        st[2].erase(x);
        st[3].erase(x);
    }

return 0;
}
