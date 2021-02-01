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

    int a, b, c; char op, q;
    cin >> a >> op >> b >> q >> c;

    if(op == '+') {
        if(a + b == c) cout << "Yes";
        else cout << a + b;
    }
    else if(op == '-')  {
        if(a - b == c) cout << "Yes";
        else cout << a - b;
    }
    else  {
        if(a * b == c) cout << "Yes";
        else cout << a * b;
    }

return 0;
}
