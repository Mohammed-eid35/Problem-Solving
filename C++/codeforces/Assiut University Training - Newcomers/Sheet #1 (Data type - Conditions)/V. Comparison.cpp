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

    int n1, n2; char op;
    cin >> n1 >> op >> n2;
    if(op == '<' && n1 < n2) cout << "Right";
    else if(op == '>' && n1 > n2) cout << "Right";
    else if(op == '=' && n1 == n2) cout << "Right";
    else cout<< "Wrong";

return 0;
}
