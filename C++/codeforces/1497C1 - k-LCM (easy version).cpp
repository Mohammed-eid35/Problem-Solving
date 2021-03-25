//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void test() {
    int n, k; cin >> n >> k;
    if (n % 4 == 0)
        cout << n / 2 << ' ' << n / 4 << ' ' << n / 4 << '\n';
    else if (n % 2 == 0)
        cout << n / 2 - 1 << ' ' << n / 2 - 1 << " 2\n";
    else
        cout << "1 " << n / 2 << ' ' << n / 2 << '\n';
}

int main() {  Mo35();

    int t; cin >> t;
    while (t--) {
        test();
    }

return 0;
}
