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
    map<string, string> mp;
    string s1, s2;
    bool f;
    while(n--) {
        cin >> s1 >> s2;
        f = true;
        for(auto m : mp) {
            if(m.second == s1) {
                mp[m.first] = s2;
                f = false;
                break;
            }
        }
        if(f) mp[s1] = s2;
    }
    cout << mp.size() << '\n';
    for(auto m : mp)
        cout << m.first << ' ' << m.second << '\n';

return 0;
}
