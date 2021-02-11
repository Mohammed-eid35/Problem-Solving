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
    vector<string> vc(n);
    for(int i = 0; i < n; ++i)
        cin >> vc[i];

    map<string, int> mp;
    for(int i = n - 1; i >= 0; --i)
        if(mp[vc[i]]++ == false)
            cout << vc[i] << '\n';

return 0;
}
