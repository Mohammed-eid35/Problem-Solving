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

    double n; cin >> n;
    if(n == (int) n) cout << "int " << (int) n;
    else cout << "float " << (int) n << ' ' << n - (int) n;

return 0;
}
