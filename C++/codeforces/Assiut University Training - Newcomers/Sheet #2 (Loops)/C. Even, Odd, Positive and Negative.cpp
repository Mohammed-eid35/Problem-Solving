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
    int x, even = 0, odd = 0, pos = 0, neg = 0;
    while(n--) {
        cin >> x;
        if(x % 2 == 0) even++;
        else odd++;

        if(x > 0) pos++;
        if(x < 0) neg++;
    }
    cout << "Even: " << even << '\n';
    cout << "Odd: " << odd << '\n';
    cout << "Positive: " << pos << '\n';
    cout << "Negative: " << neg;

return 0;
}
