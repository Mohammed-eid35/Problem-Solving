/// Link : https://codeforces.com/contest/318/problem/A
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

    ll n, k; cin >> n >> k;
    n = (n + 1) / 2;
    cout<<((k > n) ? (2 * (k - n)) : (2 * k - 1));

return 0;
}
