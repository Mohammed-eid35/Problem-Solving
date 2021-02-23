//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int GCD(int a, int b) { return b ? GCD(b, a % b) : a; }

int main() {  Mo35();

    int g = 0, mx = -1;
    int n; cin >> n;
    for (int i = 0; i < n; ++i) {
        int in; cin >> in;
        mx = max(mx, in);
        g = GCD(in, g);
    }
    cout << (((mx / g  - n) & 1) ? "Alice" : "Bob");

return 0;
}
