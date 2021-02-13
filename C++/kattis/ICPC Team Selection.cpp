//:::: Alien :::://
// Muhammad Eid //
#include <bits/stdc++.h>
using namespace std;

void Mo35() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void test() {
    int n; cin >> n;
    n *= 3;
    deque<int> qu(n);
    for(int i = 0; i < n; ++i)
        cin >> qu[i];
    sort(qu.begin(), qu.end());
    int ans = 0;
    while(!qu.empty()) {
        qu.pop_front();
        qu.pop_back();
        ans += qu.back();
        qu.pop_back();
    }
    cout << ans << '\n';
}

int main() {  Mo35();

    int t; cin >> t;
    while(t--) test();

return 0;
}
