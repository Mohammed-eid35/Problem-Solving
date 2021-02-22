//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

long long B, S, C, nb, ns, nc, pb, ps, pc, m;

bool valid(long long mid) {
    long long c = 0;
    if (B) c += (nb < B * mid ? (B * mid - nb) * pb : 0);
    if (S) c += (ns < S * mid ? (S * mid - ns) * ps : 0);
    if (C) c += (nc < C * mid ? (C * mid - nc) * pc : 0);
    return (c <= m);
}

long long BS() {
    long long lo = 1, hi = 1e13, mid, ret;
    while (lo <= hi) {
        mid = (lo + hi) >> 1;
        if (valid(mid)) {
            ret = mid;
            lo = mid + 1;
        }
        else {
            hi = mid - 1;
        }
    }
    return ret;
}

int main() {  Mo35();

    string str; cin >> str;
    int sz = str.size();
    for (int i = 0; i < sz; ++i) {
        B += (str[i] == 'B');
        S += (str[i] == 'S');
        C += (str[i] == 'C');
    }
    cin >> nb >> ns >> nc >> pb >> ps >> pc >> m;
    cout << BS();

return 0;
}
