/// Link : https://atcoder.jp/contests/abc189/tasks/abc189_b
//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {  Mo35();

    int i, n, x; cin >> n >> x;
    x *= 100;
    int v, p;
    double sum = 0.0;
    for(i=1; i<=n; ++i) {
        cin >> v >> p;
        sum += v * p;
        if(sum > x)
            return cout << i, 0;
    }
    cout << -1;

return 0;
}
