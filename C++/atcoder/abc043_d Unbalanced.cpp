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

    string s;
    cin >> s;
    int sz = s.size();
    if(sz < 2)
        return cout<< "-1 -1", 0;
    for (int i = 0; i < sz; ++i) {
        if (i < sz - 1 && s[i] == s[i + 1])
            return cout<< i+1<< ' '<< i + 2, 0;
        if (i < sz - 2 && s[i] == s[i + 2])
            return cout<< i+1<< ' '<< i + 3, 0;
    }
    cout << "-1 -1";

return 0;
}
