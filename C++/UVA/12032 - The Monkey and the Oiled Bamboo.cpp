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
int n;
int ar[N];

bool valid(int k) {
    for (int i = 1; i <= n; ++i) {
        if (ar[i] - ar[i - 1] == k)
            k--;
        else if (ar[i] - ar[i - 1] > k)
            return false;
    }
    return true;
}

int BS() {
    int lo = 1, hi = 1e7, mid, ret = 0;
    while (lo <= hi) {
        mid = (lo + hi) >> 1;
        if (valid(mid)) {
            ret = mid;
            hi = mid - 1;
        }
        else {
            lo = mid + 1;
        }
    }
    return ret;
}

int test() {
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> ar[i];
    }
    return BS();
}

int main() {  Mo35();

    int t; cin >> t;
    for (int i = 1; i <= t; ++i) {
        cout << "Case " << i << ": " << test() << '\n';
    }

return 0;
}
