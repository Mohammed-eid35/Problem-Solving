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
    int a = 0, b = 1, c;
    while(n--) {
        cout << a << ' ';
        c = b;
        b = a;
        a = b + c;
    }

return 0;
}
