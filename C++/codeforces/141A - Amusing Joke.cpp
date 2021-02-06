/// Link : https://codeforces.com/problemset/problem/141/A
//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int fr[100];

int main() {  Mo35();

    string s; cin >> s;
    for(auto c : s)
        fr[c]++;
    cin >> s;
    for(auto c : s)
        fr[c]++;
    cin >> s;
    for(auto c : s)
        fr[c]--;
    s = "YES";
    for(char c='A'; c<='Z'; ++c)
        if(fr[c])
            s = "NO";
    cout << s;

return 0;
}
