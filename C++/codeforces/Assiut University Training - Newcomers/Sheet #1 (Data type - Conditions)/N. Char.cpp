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

    char c; cin >> c;
    if(c >= 'a' && c <= 'z') cout << char (c - 32);
    else cout << char (c + 32);

return 0;
}
