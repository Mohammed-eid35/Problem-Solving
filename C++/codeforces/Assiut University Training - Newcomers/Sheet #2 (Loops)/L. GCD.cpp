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

    int a, b; cin >> a >> b;
    for(int i=min(a,b); i>0; --i)
        if(a % i == 0 && b % i == 0) {
            cout << i;
            break;
        }

return 0;
}
