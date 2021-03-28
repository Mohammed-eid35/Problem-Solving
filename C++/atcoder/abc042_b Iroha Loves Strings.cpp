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

    int n, l;
    cin >> n >> l;
    string s[n];
    for (int i = 0; i < n; ++i)
        cin >> s[i];
    sort(s, s + n);
    for (int i = 0; i < n; ++i)
        cout << s[i];

return 0;
}
