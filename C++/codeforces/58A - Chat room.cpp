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

    string h = "hello";
    int hSZ = h.size();
    string s; cin >> s;
    int sz = s.size();
    int j = 0;
    for(int i=0; i<sz; ++i)
        if(j < hSZ && s[i] == h[j])
            j++;
    cout << (j == hSZ ? "YES" : "NO");

return 0;
}
