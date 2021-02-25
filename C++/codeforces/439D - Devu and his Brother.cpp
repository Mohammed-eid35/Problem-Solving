//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

const int N = 1e5 + 5;
int A[N], B[N];
int n, m;

long long calc(int mid) {
    long long ret = 0;
    for (int i = 0; i < n; ++i) if (A[i] < mid) {
        ret += (mid - A[i]);
    }
    for (int i = 0; i < m; ++i) if (B[i] > mid) {
        ret += (B[i] - mid);
    }
    return ret;
}

long long TS() {
    int lo = 1, hi = 1e9, mid1, mid2;
    while (lo < hi) {
        mid1 = lo + (hi - lo) / 3;
        mid2 = hi - (hi - lo) / 3;

        if (calc(mid1) > calc(mid2))
            lo = mid1 + 1;
        else
            hi = mid2 - 1;
    }
    return calc(lo);
}

int main() {  Mo35();

    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> B[i];
    }
    cout << TS();

return 0;
}
