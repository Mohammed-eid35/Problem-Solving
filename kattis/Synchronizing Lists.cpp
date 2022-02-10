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

    int n;
    while (cin >> n && n) {
        vector<int> vc1(n), vc2(n);
        for (int i = 0; i < n; ++i) {
            cin >> vc1[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> vc2[i];
        }
        auto vc3 = vc1;
        sort(vc3.begin(), vc3.end());
        map<int, int> I;
        for (int i = 0; i < n; ++i) {
            I[vc3[i]] = i;
        }
        sort(vc2.begin(), vc2.end());
        for (int i = 0; i < n; ++i) {
            cout << vc2[I[vc1[i]]] << '\n';
        }
        cout << '\n';
    }

return 0;
}
