/// Link : https://atcoder.jp/contests/abc188/tasks/abc188_b
//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

const int N = 1e5 + 5;
int a[N], b[N];

int main() {  Mo35();

    int n; cin >> n;
    for(int i=0; i<n; ++i)
        cin >> a[i];
    for(int i=0; i<n; ++i)
        cin >> b[i];
    int sum = 0;
    for(int i=0; i<n; ++i)
        sum += a[i] * b[i];
    cout << (sum ? "No" : "Yes");

return 0;
}
