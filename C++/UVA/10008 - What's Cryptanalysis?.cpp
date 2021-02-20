//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

typedef pair<int, char> pic;

int main() {  Mo35();

    int n; cin >> n;
    char c;
    map<char, int> mp;
    while(cin >> c) if(isalpha(c)) {
        mp[(char)toupper(c)]++;
    }
    vector<pic> vc;
    for(auto m : mp) {
        vc.push_back({m.second, m.first});
    }
    sort(vc.begin(), vc.end(), [](pic &p1, pic &p2) {
        if(p1.first != p2.first)
            return p1.first > p2.first;
        
        return p1.second < p2.second;
    });
    for(auto v : vc) {
        cout << v.second << ' ' << v.first << '\n';
    }

return 0;
}
