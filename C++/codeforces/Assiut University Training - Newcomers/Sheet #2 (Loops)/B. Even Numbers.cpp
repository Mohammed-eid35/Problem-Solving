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
    if(n < 2)
        cout << -1;
    for(int i=2; i<=n; i+=2)
        cout << i << '\n';

return 0;
}
