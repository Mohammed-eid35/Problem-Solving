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

    int t; cin >> t;
    while(t--) {
        int x, y; cin >> x >> y;
        int sum = 0;
        for(int i=min(x,y)+1; i<max(x, y); ++i)
            if(i % 2 != 0)
                sum += i;
        cout << sum << '\n';
    }

return 0;
}
