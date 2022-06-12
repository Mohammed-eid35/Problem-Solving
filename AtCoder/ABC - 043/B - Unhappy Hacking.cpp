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

    string s = "";
    char c;
    while (cin >> c) {
        if (c != 'B')
            s += c;
        else if (!s.empty())
            s.pop_back();
    }
    cout << s;

return 0;
}
