//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int n;
int A[805], B[805];

long long test() {
    cin >> n;
    for(int i = 0; i < n; ++i)
        cin >> A[i];
    for(int i = 0; i < n; ++i)
        cin >> B[i];
    sort(A, A + n);
    sort(B, B + n);
    long long ans = 0;
    for(int i = 0; i < n; ++i)
        ans += 1ll * A[i] * B[n-1-i];
    return ans;
}

int main() {  Mo35();

    int t; cin >> t;
    for(int i = 1; i <= t; ++i)
        cout << "Case #" << i << ": " << test() << '\n';

return 0;
}
