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

    string s; cin >> s;
    int sz = s.size();

    for(int i = 1; i < sz; ++i)
        if(islower(s[i]))
            return cout << s, 0;

    cout << (islower(s[0]) ? (char)toupper(s[0]) : (char)tolower(s[0]));
    for(int i = 1; i < sz; ++i)
        cout << (char)tolower(s[i]);

return 0;
}
