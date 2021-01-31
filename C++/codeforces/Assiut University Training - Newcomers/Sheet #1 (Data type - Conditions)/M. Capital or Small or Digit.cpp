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

    char x; cin >> x;
    if(x >= 'A' && x <= 'Z') cout << "ALPHA\nIS CAPITAL";
    else if(x >= 'a' && x <= 'z') cout << "ALPHA\nIS SMALL";
    else cout << "IS DIGIT";

return 0;
}
