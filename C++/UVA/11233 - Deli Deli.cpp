//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {  Mo35();

    int l, n; cin >> l >> n;
    map<string, string> mp;
    for(int i = 0; i < l; ++i) {
        string k, v; cin >> k >> v;
        mp[k] = v;
    }
    while(n--) {
        string s; cin >> s;
        char c1 = s[s.size() - 2], c2 = s.back();
        if(mp[s] != "") {
            cout << mp[s] << '\n';
        }
        else if(!isVowel(c1) && c2 == 'y') {
            s.pop_back();
            cout << s << "ies\n";
        }
        else if(c2 == 'o' || c2 == 's' || c2 == 'x' || ((c1 == 's' || c1 == 'c') && c2 == 'h')) {
            cout << s << "es\n";
        }
        else {
            cout << s << "s\n";
        }
    }

return 0;
}
