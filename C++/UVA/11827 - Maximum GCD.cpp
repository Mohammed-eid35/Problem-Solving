//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int myGCD(int a, int b) {
    return b ? myGCD(b, a % b) : a;
}

vector<int> nextArray() {
    string in; getline(cin, in);
    istringstream ss(in);
    vector<int> vc;
    for(int i = 0; ss >> i; vc.push_back(i));
    return vc;
}

void test() {
    vector<int> vc = nextArray();
    int sz = vc.size();
    int ans = -1;
    for(int i = 0; i < sz; ++i)
        for(int j = i + 1; j < sz; ++j)
            ans = max(ans, myGCD(vc[i], vc[j]));
    cout << ans << '\n';
}

int main() {  Mo35();

    int t; cin >> t;
    cin.ignore();
    while(t--) test();

return 0;
}
