/// Link : https://codeforces.com/problemset/problem/734/A
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
    char c;
    int d = 0, a = 0;
    while(n--) {
        cin >> c;
        if(c == 'A')
            a++;
        else
            d++;
    }
    if(a > d)
        cout << "Anton";
    else if(d > a)
        cout << "Danik";
    else
        cout << "Friendship";

return 0;
}
