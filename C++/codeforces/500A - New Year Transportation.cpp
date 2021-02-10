//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

const int N = 3e4 + 5;
int ar[N];

int main() {  Mo35();

    int n, t; cin >> n >> t;
    for(int i = 1; i < n; ++i)
        cin >> ar[i];
    int i = 1;
    while(i <= t) {
        if(i == t)
            return cout << "YES", 0;
        i += ar[i];
    }
    cout << "NO";

return 0;
}
