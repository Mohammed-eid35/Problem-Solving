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
    bool prime = (n < 2 ? false : true);
    for(int i=2; i<n; ++i)
        if(n % i == 0)
            prime = false;
    cout << (prime ? "YES" : "NO");

return 0;
}
