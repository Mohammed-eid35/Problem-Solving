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

    int a, b, c; cin >> a >> b >> c;
    cout << max({a*b*c, a+b+c, (a+b)*c, a*(c+b)});

return 0;
}
