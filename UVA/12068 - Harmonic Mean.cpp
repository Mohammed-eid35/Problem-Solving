//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("input.txt", "rt", stdin);
}

const int N = 9 + 5;
long long ar[N];

long long GCD(long long a, long long b) {
    return b ? GCD(b, a % b) : a;
}

void test() {
    int n; cin >> n;
    long long x = 1;
    for (int i = 0; i < n; ++i) {
        cin >> ar[i];
        x *= ar[i];
    }
    long long y = 0;
    for (int i = 0; i < n; ++i) {
        y += (x / ar[i]);
    }
    x *= n;
    long long g = GCD(x, y);
    cout << (x / g) << '/' << (y / g);
}

int main() {  Mo35();

    int t; cin >> t;
    for (int i = 1; i <= t; ++i) {
        cout << "Case " << i << ": ";
        test();
        cout << '\n';
    }

return 0;
}
