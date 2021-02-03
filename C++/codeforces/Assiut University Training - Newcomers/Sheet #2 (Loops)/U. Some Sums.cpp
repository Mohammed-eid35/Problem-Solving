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

    int n, a, b; cin >> n >> a >> b;
    int sum = 0;
    for(int i=1; i<=n; ++i) {
        int k = i, sumDigits = 0;
        while(k) {
            sumDigits += (k % 10);
            k /= 10;
        }
        if(sumDigits >= a && sumDigits <= b)
            sum += i;
    }
    cout << sum;

return 0;
}
