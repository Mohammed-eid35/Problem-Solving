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

    int n, m;
    while(cin >> n >> m) {
        if(min(n, m) <= 0)
            break;
        int sum = 0;
        for(int i=min(n, m); i<=max(n, m); ++i) {
            sum += i;
            cout << i << ' ';
        }
        cout << "sum =" << sum << '\n';
    }

return 0;
}
