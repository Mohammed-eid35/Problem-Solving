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
    for(int i=1; i<=n*4; ++i)
        if(i % 4 == 0)
            cout << "PUM\n";
        else
            cout << i << ' ';

return 0;
}
