//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int cost(int n, vector<int> &vc) {
    int cst = 0;
    for (auto v : vc)
        cst += (v - n) * (v - n);
    return cst;
}

int main() {  Mo35();

    int n;
    cin >> n;
    vector<int> vc(n);
    for (int i = 0; i < n; ++i)
        cin >> vc[i];
    int mn = 2e9;
    for (int i = -105; i < 105; ++i)
        mn = min(mn, cost(i, vc));
    cout << mn;

return 0;
}
