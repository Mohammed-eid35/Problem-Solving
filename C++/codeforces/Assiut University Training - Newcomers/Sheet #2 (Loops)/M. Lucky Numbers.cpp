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
    bool found = false;
    for(int i=a; i<=b; ++i) {
        int n = i;
        bool lucky = true;
        while(n) {
            if(n % 10 != 4 && n % 10 != 7)
                lucky = false;
            n /= 10;
        }
        if(lucky) {
            cout << i << ' ';
            found = true;
        }
    }
    if(!found)
        cout << -1;

return 0;
}
