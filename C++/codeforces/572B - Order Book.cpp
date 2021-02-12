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

    char d; int p, q;
    map<int, int> mpB, mpS;
    int n, s; cin >> n >> s;
    while(n--) {
        cin >> d >> p >> q;
        if(d == 'B')
            mpB[p] += q;
        else
            mpS[p] += q;
    }
    int cnt = 0;
    map<int, int> ans;
    for(auto m : mpS) if(cnt++ < s) {
        ans[m.first] = m.second;
    }
    cnt = 0;
    for(auto it = ans.rbegin(); it != ans.rend(); ++it) {
        cout << "S " << it->first << ' ' << it->second << '\n';
    }
    cnt = 0;
    for(auto it = mpB.rbegin(); it != mpB.rend(); ++it) if(cnt++ < s) {
        cout << "B " << it->first << ' ' << it->second << '\n';
    }

return 0;
}
