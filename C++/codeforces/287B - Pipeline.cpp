//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

long long n, k;

bool valid(long long m) {
    return ((k - (k - m + 1) + 1) * (k - m + 1 + k) / 2 - (m - 1) >= n);
}

long long BS() {
    long long lo = 0, hi = k - 1, mid;
    while (lo < hi) {
        mid = (lo + hi) >> 1;
        if (valid(mid))
            hi = mid;
        else
            lo = mid + 1;
    }
    return lo;
}

int main() {  Mo35();

    cin >> n >> k;
    long long res = BS();
    cout << (valid(res) ? res : -1);

    return 0;
}
