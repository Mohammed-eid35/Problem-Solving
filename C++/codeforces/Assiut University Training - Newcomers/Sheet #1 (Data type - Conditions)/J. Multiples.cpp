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

    int a, b; cin >> a >> b;
    cout << (max(a, b) % min(a, b) == 0 ? "Multiples" : "No Multiples");

return 0;
}
