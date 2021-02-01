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

    int ar1[3], ar2[3];
    for(int i=0; i<3; ++i) {
        cin >> ar1[i];
        ar2[i] = ar1[i];
    }
    sort(ar1, ar1+3);
    for(int i=0; i<3; ++i) cout << ar1[i] << '\n';
    cout << '\n';
    for(int i=0; i<3; ++i) cout << ar2[i] << '\n';

return 0;
}
