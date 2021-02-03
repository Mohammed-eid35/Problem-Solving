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
    for(int i=2; i<=n; ++i) {
        bool prime = true;
        for(int j=2; j*j<=i;++j)
            if(i % j == 0)
                prime = false;
        if(prime)
            cout << i << ' ';
    }

return 0;
}
