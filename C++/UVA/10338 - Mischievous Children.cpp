//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

long long fact(int n) {
    long long ret = 1;
    for (int i = 1; i <= n; ++i) {
        ret *= i;
    }
    return ret;
}

long long wayNO() {
    string str; cin >> str;
    map<char, int> mp;
    for (auto ch : str) {
        mp[ch]++;
    }
    long long ret = 1;
    for (char ch = 'A'; ch <= 'Z'; ++ch) {
        if (mp[ch])
            ret *= fact(mp[ch]);
    }
    return (fact(str.size()) / ret);
}

int main() {  Mo35();

    int t; cin >> t;
    for (int i = 1; i <= t; ++i) {
        cout << "Data set " << i << ": " << wayNO() << '\n';
    }

return 0;
}
