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

    int n; cin >> n;
    int m = n, re = 0;
    while(m) {
        re = (re * 10) + (m % 10);
        m /= 10;
    }
    cout << re << '\n';
    cout << (n == re ? "YES" : "NO");

return 0;
}
