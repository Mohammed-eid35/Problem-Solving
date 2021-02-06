/// Link : https://codeforces.com/problemset/problem/977/A
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

    int n, k; cin >> n >> k;
    while(k--)
        if(n % 10)
            n--;
        else
            n /= 10;
    cout << n;

return 0;
}
