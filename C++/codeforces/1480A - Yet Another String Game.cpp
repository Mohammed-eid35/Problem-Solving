/// Link : https://codeforces.com/contest/1480/problem/A
//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void test() {
    string s; cin >> s;
    int sz = s.size();
    bool turn = true;
    for(int i=0; i<sz; ++i) {
        if(turn) {
            if(s[i] == 'a')
                s[i] = 'b';
            else
                s[i] = 'a';
        }
        else {
            if(s[i] == 'z')
                s[i] = 'y';
            else
                s[i] = 'z';
        }
        turn = !turn;
    }
    cout << s << '\n';
}

int main() {  Mo35();

    int t; cin >> t;
    while(t--)
        test();

return 0;
}
